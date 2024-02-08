/*
** EPITECH PROJECT, 2024
** B-OOP-400-PAR-4-1-tekspice-ryan.hercule
** File description:
** Circuit
*/

#include "Circuit.hpp"

nts::Circuit::Circuit(std::vector<std::unique_ptr<nts::IComponent>> components) : tick(0), components(std::move(components)), needToChange(false)
{
}

nts::Circuit::~Circuit()
{
    components.clear();
}

bool nts::Circuit::ctrlC = false;

void nts::Circuit::run()
{
    std::cout << "> ";
    while (getline(std::cin, line)) {
        if (!checkline())
            break;
        std::cout << "> ";
    }
}

void nts::Circuit::sigintHandler(int signal) 
{
    ctrlC = true;
}

void nts::Circuit::inputChangeValue(int x, std::string val)
{
    if (x == -1) {
        std::cerr << "Component with this name doesn't exist";
    }
    if (components[x]->getType() != nts::INPUT) {
        std::cerr << "Not an input component";
    }
    if (val == "0") {
        components[x]->setValue(FALSE);
    } else if (val == "1") {
        components[x]->setValue(TRUE);
    } else if (val == "U") {
        components[x]->setValue(UNDEFINED);
    } else {
        std::cerr << "This value doesn't exist";
    }
}

void nts::Circuit::makeChange()
{
    std::vector<std::string> fst_arr;
    std::size_t len = components.size();
    int x = -1;

    for(std::size_t i = 0; i < inputValue.size(); i += 1) {
        fst_arr = string_to_vector(inputValue[i], '=');
        for(std::size_t i = 0; i < len; i += 1) {
            if (components[i]->getName() == fst_arr[0]) {
                x = i;
            }
        }
        inputChangeValue(x, fst_arr[1]);
        x = -1;
        fst_arr.clear();
    }
    inputValue.clear();
    needToChange = false;
}

void nts::Circuit::simulate()
{
    tick += 1;
    if (needToChange) {
        makeChange();
    }
    for (size_t i = 0; i < components.size(); ++i) {
        components[i]->simulate(tick);
    }
}

void nts::Circuit::display()
{
    std::cout << "tick: " <<  tick << "\ninputs(s):\n";
    sort(components.begin(), components.end());
    for (size_t i = 0; i < components.size(); ++i) {
        if (components[i]->getType() == INPUT || components[i]->getType() == SPECIAL)
            std::cout << "  " << components[i]->getName() << ": " << components[i]->compute(1) << "\n";
    }
    std::cout << "output(s):\n";
    for (size_t i = 0; i < components.size(); ++i) {
        if (components[i]->getType() == OUTPUT)
            std::cout << "  " << components[i]->getName() << ": " << components[i]->compute(1) << "\n";
    }
}

bool nts::Circuit::checkline()
{
    std::signal(SIGINT, sigintHandler);
    if (line == "exit") {
        return false;
    }
    else if (line == "display") {
        display();
    } 
    else if (line.find("=") != std::string::npos) {
        needToChange = true;
        inputValue.push_back(line);
    }
    else if (line == "simulate") {
        simulate();
    }
    else if (line == "loop") {
        while (!ctrlC) {
            simulate();
        }
        std::signal(SIGINT, SIG_DFL);
        std::cout << std::endl;
    }
    else {
        std::cerr << "Wrong Command, use:\nexit\ndisplay\ninput=value\nsimulate\nloop";
    }
    return true;
}

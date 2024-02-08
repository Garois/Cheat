/*
** EPITECH PROJECT, 2024
** Z.cpp
** File description:
** ex00
*/

#include "IComponent.hpp"
#include "Parser.hpp"
#include "Circuit.hpp"

std::vector<std::string> string_to_vector(std::string str, char delim) {
    std::size_t pos;
    std::string word;
    std::vector<std::string> res;

    while ((pos = str.find(delim)) != std::string::npos) {
        word = str.substr(0, pos);
        res.push_back (word);
        str.erase(0, pos + 1);
    }
    res.push_back(str);
    return res;
}

void nanotekspice(int ac, char **av)
{
    if (ac != 2) {
        throw nts::Error("Wrong number of argument");
    }
    nts::Parser parser(av[1]);
    nts::Circuit circuit(parser.GetComps());
    circuit.run();
}

int main(int ac, char **av)
{
    try {
        nanotekspice(ac,av);
    } catch ( const nts::Error &e) {
        std :: cerr << "failure: " << e.what() << std :: endl ;
        return 84;
    }
    return 0;
}
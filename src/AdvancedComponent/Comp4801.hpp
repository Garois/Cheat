/*
** EPITECH PROJECT, 2024
** B-OOP-400-PAR-4-1-tekspice-ryan.hercule
** File description:
** Comp4801
*/

#ifndef COMP4801_HPP_
#define COMP4801_HPP_

#include "AdvancedComponent.hpp"

namespace nts {
    class Comp4801 : public AdvancedComponent {
        public:
            Comp4801(std::string name);
            ~Comp4801() = default;
            nts::Tristate compute(std::size_t pin);
    };
}

#endif /* !COMP4801_HPP_ */

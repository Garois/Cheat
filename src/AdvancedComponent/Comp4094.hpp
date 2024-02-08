/*
** EPITECH PROJECT, 2024
** B-OOP-400-PAR-4-1-tekspice-ryan.hercule
** File description:
** Comp4094
*/

#ifndef COMP4094_HPP_
#define COMP4094_HPP_

#include "AdvancedComponent.hpp"

namespace nts {
    class Comp4094 : public AdvancedComponent {
        public:
            Comp4094(std::string name);
            ~Comp4094() = default;
            nts::Tristate compute(std::size_t pin);
    };
}

#endif /* !COMP4094_HPP_ */

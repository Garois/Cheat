/*
** EPITECH PROJECT, 2024
** B-OOP-400-PAR-4-1-tekspice-ryan.hercule
** File description:
** Comp4008
*/

#ifndef COMP4008_HPP_
#define COMP4008_HPP_

#include "AdvancedComponent.hpp"

namespace nts {
    class Comp4008 : public AdvancedComponent {
        public:
            Comp4008(std::string name);
            ~Comp4008() = default;
            nts::Tristate compute(std::size_t pin);
    };
}

#endif /* !COMP4008_HPP_ */

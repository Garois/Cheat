/*
** EPITECH PROJECT, 2024
** B-OOP-400-PAR-4-1-tekspice-ryan.hercule
** File description:
** Comp4013
*/

#ifndef COMP4013_HPP_
#define COMP4013_HPP_

#include "AdvancedComponent.hpp"

namespace nts {
    class Comp4013 : public AdvancedComponent {
        public:
            Comp4013(std::string name);
            ~Comp4013() = default;
            nts::Tristate compute(std::size_t pin);
    };
}

#endif /* !COMP4013_HPP_ */

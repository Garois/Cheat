/*
** EPITECH PROJECT, 2024
** B-OOP-400-PAR-4-1-tekspice-ryan.hercule
** File description:
** Comp4512
*/

#ifndef COMP4512_HPP_
#define COMP4512_HPP_

#include "AdvancedComponent.hpp"

namespace nts {
    class Comp4512 : public AdvancedComponent {
        public:
            Comp4512(std::string name);
            ~Comp4512() = default;
            nts::Tristate compute(std::size_t pin);
    };
}

#endif /* !COMP4512_HPP_ */

/*
** EPITECH PROJECT, 2024
** B-OOP-400-PAR-4-1-tekspice-ryan.hercule
** File description:
** Comp4514
*/

#ifndef COMP4514_HPP_
#define COMP4514_HPP_

#include "AdvancedComponent.hpp"

namespace nts {
    class Comp4514 : public AdvancedComponent {
        public:
            Comp4514(std::string name);
            ~Comp4514() = default;
            nts::Tristate compute(std::size_t pin);
    };
}

#endif /* !COMP4514_HPP_ */

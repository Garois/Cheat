/*
** EPITECH PROJECT, 2024
** B-OOP-400-PAR-4-1-tekspice-ryan.hercule
** File description:
** Comp4040
*/

#ifndef COMP4040_HPP_
#define COMP4040_HPP_

#include "AdvancedComponent.hpp"

namespace nts {
    class Comp4040 : public AdvancedComponent {
        public:
            Comp4040(std::string name);
            ~Comp4040() = default;
            nts::Tristate compute(std::size_t pin);
    };
}

#endif /* !COMP4040_HPP_ */

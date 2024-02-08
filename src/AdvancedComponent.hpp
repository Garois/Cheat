/*
** EPITECH PROJECT, 2024
** B-OOP-400-PAR-4-1-tekspice-ryan.hercule
** File description:
** OtherComponent
*/

#ifndef ADVANCEDCOMPONENT_HPP_
#define ADVANCEDCOMPONENT_HPP_

#include "AComponent.hpp"

namespace nts {
    class AdvancedComponent : public AComponent {
        public:
            AdvancedComponent(std::string name, std::size_t nb);
            ~AdvancedComponent() = default;
    };
}
#endif /* !OTHERCOMPONENT_HPP_ */

/*
** EPITECH PROJECT, 2024
** B-OOP-400-PAR-4-1-tekspice-ryan.hercule
** File description:
** Logger
*/

#ifndef LOGGER_HPP_
#define LOGGER_HPP_

#include "AdvancedComponent.hpp"

namespace nts {
    class Logger : public AdvancedComponent {
        public:
            Logger(std::string name);
            ~Logger() = default;
            nts::Tristate compute(std::size_t pin);
    };
}
#endif /* !LOGGER_HPP_ */

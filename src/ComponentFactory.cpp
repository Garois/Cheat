/*
** EPITECH PROJECT, 2024
** Z.cpp
** File description:
** ex00
*/

#include "ComponentFactory.hpp"
#include "Input.hpp"
#include "Output.hpp"
#include "False.hpp"
#include "True.hpp"
#include "Clock.hpp"
#include "And.hpp"
#include "Or.hpp"
#include "Xor.hpp"
#include "Not.hpp"
#include "Comp4030.hpp"
#include "Comp4001.hpp"
#include "Comp4011.hpp"
#include "Comp4069.hpp"
#include "Comp4071.hpp"
#include "Comp4081.hpp"

nts::ComponentFactory::ComponentFactory()
{
    _map["input"] = std::bind(&nts::ComponentFactory::createInput, this, std::placeholders::_1);
    _map["output"] = std::bind(&nts::ComponentFactory::createOutput, this, std::placeholders::_1);
    _map["false"] = std::bind(&nts::ComponentFactory::createFalse, this, std::placeholders::_1);
    _map["true"] = std::bind(&nts::ComponentFactory::createTrue, this, std::placeholders::_1);
    _map["clock"] = std::bind(&nts::ComponentFactory::createClock, this, std::placeholders::_1);
    _map["and"] = std::bind(&nts::ComponentFactory::createAnd, this, std::placeholders::_1);
    _map["or"] = std::bind(&nts::ComponentFactory::createOr, this, std::placeholders::_1);
    _map["xor"] = std::bind(&nts::ComponentFactory::createXor, this, std::placeholders::_1);
    _map["not"] = std::bind(&nts::ComponentFactory::createNot, this, std::placeholders::_1);
    _map["4030"] = std::bind(&nts::ComponentFactory::createComp4030, this, std::placeholders::_1);
    _map["4001"] = std::bind(&nts::ComponentFactory::createComp4001, this, std::placeholders::_1);
    _map["4011"] = std::bind(&nts::ComponentFactory::createComp4011, this, std::placeholders::_1);
    _map["4069"] = std::bind(&nts::ComponentFactory::createComp4069, this, std::placeholders::_1);
    _map["4071"] = std::bind(&nts::ComponentFactory::createComp4071, this, std::placeholders::_1);
    _map["4081"] = std::bind(&nts::ComponentFactory::createComp4081, this, std::placeholders::_1);
}

nts::ComponentFactory::~ComponentFactory()
{
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createComponent(const std::string &type, const std::string &name)
{
    if (_map.find(type) == _map.end()) {
        throw nts::Error("Unknow component");
    }
    return _map[type](name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createInput(const std::string &name) const
{
    return std::make_unique<nts::Input>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createOutput(const std::string &name) const
{
    return std::make_unique<nts::Output>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createFalse(const std::string &name) const
{
    return std::make_unique<nts::False>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createTrue(const std::string &name) const
{
    return std::make_unique<nts::True>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createClock(const std::string &name) const
{
    return std::make_unique<nts::Clock>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createAnd(const std::string &name) const
{
    return std::make_unique<nts::And>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createOr(const std::string &name) const
{
    return std::make_unique<nts::Or>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createXor(const std::string &name) const
{
    return std::make_unique<nts::Xor>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createNot(const std::string &name) const
{
    return std::make_unique<nts::Not>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createComp4030(const std::string &name) const
{
    return std::make_unique<nts::Comp4030>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createComp4001(const std::string &name) const
{
    return std::make_unique<nts::Comp4001>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createComp4011(const std::string &name) const
{
    return std::make_unique<nts::Comp4011>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createComp4069(const std::string &name) const
{
    return std::make_unique<nts::Comp4069>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createComp4071(const std::string &name) const
{
    return std::make_unique<nts::Comp4071>(name);
}

std::unique_ptr<nts::IComponent> nts::ComponentFactory::createComp4081(const std::string &name) const
{
    return std::make_unique<nts::Comp4081>(name);
}

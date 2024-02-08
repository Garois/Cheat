/*
** EPITECH PROJECT, 2024
** name
** File description:
** includes
*/

#ifndef COMPONENTFACTORY_HPP_

    #define COMPONENTFACTORY_HPP_
    #include <string>
    #include <map>
    #include <functional>
    #include <memory>
    #include "IComponent.hpp"

namespace nts {
  class ComponentFactory {
    public:
      ComponentFactory();
      ~ComponentFactory();
      std::unique_ptr<nts::IComponent> createComponent(const std::string &type, const std::string &name);
    private:
      std::map<std::string, std::function<std::unique_ptr<nts::IComponent> (const std::string &)>> _map;
      std::unique_ptr<nts::IComponent> createInput(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createOutput(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createFalse(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createTrue(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createClock(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createAnd(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createOr(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createXor(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createNot(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createComp4030(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createComp4001(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createComp4011(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createComp4069(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createComp4071(const std::string &name) const;
      std::unique_ptr<nts::IComponent> createComp4081(const std::string &name) const;
  };
}
#endif

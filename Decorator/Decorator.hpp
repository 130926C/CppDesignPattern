#ifndef _DECORATOR_HPP_
#define _DECORATOR_HPP_

#include "Component.hpp"

#include <memory>

class Decorator: public Component{

public:
    Decorator(std::shared_ptr<Component>& comp) {
        this->_comp = comp;
    };

    ~Decorator() {};

    void Operation(){
        this->_comp->Operation();
    }

    std::shared_ptr<Component> _comp;
};

#endif
#ifndef _CONCRETEDECORATOR_HPP_
#define _CONCRETEDECORATOR_HPP_

#include "Decorator.hpp"
#include <memory>
#include <iostream>

class ConcreteDecorator: public Decorator{

public:
    ConcreteDecorator(std::shared_ptr<Component> p): Decorator(p) {};
    ~ConcreteDecorator() {};

    void Operation(){
        std::cout << "Concrete Decorator Operation" << std::endl;
    }

    void SpecialOperation(){
        std::cout << "Concrete Decorator Speial Operation" << std::endl;
    }

};

#endif 
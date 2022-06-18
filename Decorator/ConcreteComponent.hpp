#ifndef _CONCERETECOMPONENT_HPP_
#define _CONCERETECOMPONENT_HPP_

#include "Component.hpp"

#include <iostream>

class ConcreteComponent: public Component{

public:
    ConcreteComponent() { };
    ~ConcreteComponent() { };

    void Operation(){
        std::cout << "Concrete Component Operation" << std::endl;
    }   

    void SpecialOperation(){
        std::cout << "Concrete Component Special Operation" << std::endl;
    }
};

#endif 
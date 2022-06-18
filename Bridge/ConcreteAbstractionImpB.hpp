#ifndef _CONCRETEABSTRACTIONIMPB_HPP_
#define _CONCRETEABSTRACTIONIMPB_HPP_

#include "AbstractionImp.hpp"
#include <iostream>

class ConcreteAbstractionImpB: public AbstractionImp{

public: 
    ConcreteAbstractionImpB() {};
    ~ConcreteAbstractionImpB() {};

    virtual void Operation(){
        std::cout << "Concrete Abstraction Imp B" << std::endl;
    }
};

#endif
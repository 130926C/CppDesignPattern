#ifndef _CONCRETEABSTRACTIONIMPA_HPP_
#define _CONCRETEABSTRACTIONIMPA_HPP_

#include "AbstractionImp.hpp"
#include <iostream>

class ConcreteAbstractionImpA: public AbstractionImp{

public:
    ConcreteAbstractionImpA() {};
    ~ConcreteAbstractionImpA() {};

    virtual void Operation(){
        std::cout << "Concrete Abstraction Imp A" << std::endl;
    }
};

#endif
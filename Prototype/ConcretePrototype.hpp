#ifndef _CONCRETEPROTOTYPE_HPP_
#define _CONCRETEPROTOTYPE_HPP_

#include "Prototype.hpp"

class ConcretePrototype: public Prototype{

public:
    ConcretePrototype();
    ConcretePrototype(const ConcretePrototype&cp);
    ~ConcretePrototype(); 

    Prototype* Clone() const;

};

#endif
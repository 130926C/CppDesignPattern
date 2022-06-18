#include "ConcretePrototype.hpp"
#include <iostream>

ConcretePrototype::ConcretePrototype(){

}

ConcretePrototype::~ConcretePrototype(){

}

ConcretePrototype::ConcretePrototype(const ConcretePrototype&cp){
    std::cout << "ConcretePrototype " << std::endl;
}

Prototype* ConcretePrototype::Clone() const {
    return new ConcretePrototype(*this);
}


#include "Prototype.hpp"
#include "ConcretePrototype.hpp"
#include <iostream>

int main(){
    Prototype *p = new ConcretePrototype();
    Prototype *p1 = p->Clone();

    return 0;
}
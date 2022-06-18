#include "ConcreteAbstractionImpB.hpp"
#include "ConcreteAbstractionImpA.hpp"

#include "RefindAbstraction.hpp"

#include <iostream>

int main(){
    std::unique_ptr<AbstractionImp> conA = std::make_unique<ConcreteAbstractionImpA>();
    std::unique_ptr<AbstractionImp> conB = std::make_unique<ConcreteAbstractionImpB>();

    std::unique_ptr<Abstraction> redA = std::make_unique<RefindAbstraction>(conA);

    redA->Operation();

    return 0;
}
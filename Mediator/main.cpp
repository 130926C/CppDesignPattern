#include <iostream>

#include "ConcreteColleagueOne.hpp"
#include "ConcreteColleagueTwo.hpp"
#include "ConcreteMediator.hpp"

void test(){
    Mediator* mediator = new ConcreteMediator();
    Colleague* colleagueOne = new ConcreteColleagueOne(mediator);
    Colleague* colleagueTwo = new ConcreteColleagueTwo(mediator);

    colleagueOne->send("hello");
    colleagueTwo->send("hi");
}

int main(){
    test();

    return 0;
}
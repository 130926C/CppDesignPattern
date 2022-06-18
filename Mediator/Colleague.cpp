#include "Colleague.hpp"
#include "Mediator.hpp"

Mediator* Colleague::getMediator(){
    return mediator;
}

void Colleague::setMediator(Mediator* const mediator){
    this->mediator = mediator;
}


Colleague::Colleague(Mediator* mediator){
    this->mediator = mediator;
    this->mediator->add(this);
}


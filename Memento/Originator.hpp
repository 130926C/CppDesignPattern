#ifndef _ORIGINATOR_HPP_
#define _ORIGINATOR_HPP_

#include "Memento.hpp"

class Originator{

public:
    std::string getState() const {
        return state;
    }

    void setState(const std::string& state){
        this->state = state;
    }

    Memento SaveStateMemento(){
        return Memento(state);
    }

    void getStateFromMemento(Memento memento){
        state = memento.getState();
    }

private:
    std::string state;
};


#endif 
#ifndef _CARETAKER_HPP_
#define _CARETAKER_HPP_

#include <vector>
#include "Memento.hpp"

class Caretaker{
public:
    void add(Memento memento){
        this->mementoList.push_back(memento);
    }

    Memento get(int index){
        return mementoList[index];
    }

private:
    std::vector<Memento> mementoList;
};


#endif 
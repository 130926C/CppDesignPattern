#ifndef _MEMENTO_HPP_
#define _MEMENTO_HPP_

#include <string>

class Memento{

public:
    explicit Memento(const std::string& state): state(state) {};

    std::string getState(){
        return state;
    }

protected:
    std::string state;
};


#endif
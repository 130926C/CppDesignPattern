#ifndef _NEWINTERFACE_HPP_
#define _NEWINTERFACE_HPP_

#include <iostream>

class NewInterface{

public:
    NewInterface() {};
    ~NewInterface() {};

    void SpecialRequest(){
        std::cout << "New Interface Request" << std::endl;
    }
};

#endif 
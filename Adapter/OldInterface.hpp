#ifndef _OLDINTERFACE_HPP_
#define _OLDINTERFACE_HPP_

#include <iostream>

class OldInterface{

public:
    OldInterface() {};
    ~OldInterface() {};

    virtual void Request(){
        std::cout << "Old Interface Request" << std::endl;
    }
};

#endif 
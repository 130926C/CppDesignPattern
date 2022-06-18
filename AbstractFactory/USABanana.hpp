#ifndef _USABANANA_HPP_
#define _USABANANA_HPP_

#include "AbstractBanana.hpp"

#include <iostream>

class USABanana: public AbstarctBanana{

public:
    virtual void showName(){
        std::cout << "USA Banana" << std::endl;
    }

};

#endif 
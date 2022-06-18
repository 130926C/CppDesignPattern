#ifndef _CHINABANANA_HPP_
#define _CHINABANANA_HPP_

#include "AbstractBanana.hpp"

#include <iostream>

class ChinaBanana: public AbstarctBanana{

public: 
    virtual void showName(){
        std::cout << "China Banana" << std::endl;
    }

};

#endif
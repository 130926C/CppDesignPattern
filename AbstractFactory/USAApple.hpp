#ifndef _USAAPPLE_HPP_
#define _USAAPPLE_HPP_

#include "AbstractApple.hpp"

#include <iostream>

class USAApple: public AbstractApple{

public:

    virtual void showName(){
        std::cout << "USA Apple" << std::endl;
    }

};


#endif
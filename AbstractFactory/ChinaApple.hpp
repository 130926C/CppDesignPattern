#ifndef _CHINAAPPLE_HPP_
#define _CHINAAPPLE_HPP_

#include "AbstractApple.hpp"
#include <iostream>

class ChinaApple: public AbstractApple{

public:
    virtual void showName(){
        std::cout << "China Apple" << std::endl;
    }

};

#endif 
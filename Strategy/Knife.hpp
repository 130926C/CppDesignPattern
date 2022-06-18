#ifndef _KNIFE_HPP_
#define _KNIFE_HPP_

#include "AbstractionWeapon.hpp"
#include <iostream>

class Knife: public AbstractionWeapon{

public:
    void UseWeapon() override {
        std::cout << "Use Knife" << std::endl;
    }
};


#endif 
#ifndef _AK47_HPP_
#define _AK47_HPP_

#include "AbstractionWeapon.hpp"
#include <iostream>

class AK47:public AbstractionWeapon{

public:
    void UseWeapon() override{
        std::cout << "Use AK47" << std::endl;
    };

};


#endif 
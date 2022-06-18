#ifndef _ABSTRACTIONIMP_HPP_
#define _ABSTRACTIONIMP_HPP_

#include <iostream>

class AbstractionImp{

public: 
    AbstractionImp() {};
    virtual ~AbstractionImp() = default;

    virtual void Operation() {
        std::cout << "Abstraction Imp " << std::endl;
    }
};

#endif 
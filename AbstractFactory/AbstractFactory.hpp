#ifndef _ABSTRACTFACTORY_HPP_
#define _ABSTRACTFACTORY_HPP_

#include "AbstractApple.hpp"
#include "AbstractBanana.hpp"

#include <memory>

class AbstractFactory{

public: 
    virtual std::unique_ptr<AbstarctBanana> createBanana() = 0;
    virtual std::unique_ptr<AbstractApple> createApple() = 0;
};

#endif
#ifndef _USAFACTORT_HPP_
#define _USAFACTORT_HPP_

#include "AbstractFactory.hpp"
#include "USAApple.hpp"
#include "USABanana.hpp"

#include <memory>

class USAFactory: public AbstractFactory{

public:
    virtual std::unique_ptr<AbstarctBanana> createBanana(){
        return std::make_unique<USABanana>();
    }

    virtual std::unique_ptr<AbstractApple> createApple(){
        return std::make_unique<USAApple>();
    }
};


#endif
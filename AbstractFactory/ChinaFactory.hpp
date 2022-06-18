#ifndef _CHINAFACTORY_HPP_
#define _CHINAFACTORY_HPP_

#include "AbstractFactory.hpp"
#include "ChinaApple.hpp"
#include "ChinaBanana.hpp"

#include <memory>

class ChinaFactory: public AbstractFactory{

public:
    virtual std::unique_ptr<AbstarctBanana> createBanana(){
        return std::make_unique<ChinaBanana>();
    }
    virtual std::unique_ptr<AbstractApple> createApple(){
        return std::make_unique<ChinaApple>();
    }


};


#endif 
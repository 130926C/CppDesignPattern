#ifndef _REFINDABSTRACTION_HPP_
#define _REFINDABSTRACTION_HPP_

#include "Abstraction.hpp"
#include "AbstractionImp.hpp"
#include <memory>

class RefindAbstraction: public Abstraction{
    
public:
    RefindAbstraction(std::unique_ptr<AbstractionImp> &imp){
        this->_imp = std::move(imp);
    }

    ~RefindAbstraction() {};

    void Operation(){
        this->_imp->Operation();
    }

private:
    std::unique_ptr<AbstractionImp> _imp;
};

#endif 
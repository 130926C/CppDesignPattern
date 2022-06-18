#ifndef _ADAPTER_HPP_
#define _ADAPTER_HPP_

#include "OldInterface.hpp"
#include "NewInterface.hpp"

#include <memory>

class Adapter: public OldInterface{

public:
    Adapter(std::unique_ptr<NewInterface>& np) { 
        this->_nimp = std::move(np);
    }

    ~Adapter() { };

    void Request(){
        this->_nimp->SpecialRequest();
    }

private:
    std::unique_ptr<NewInterface> _nimp;
};

#endif
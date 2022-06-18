#include <iostream>
#include "OldInterface.hpp"
#include "NewInterface.hpp"
#include "Adapter.hpp"

#include <memory>

int main(){

    std::unique_ptr<NewInterface> nptr = std::make_unique<NewInterface>();
    std::unique_ptr<OldInterface> optr = std::make_unique<Adapter>(nptr);

    optr->Request();

    return 0;
}
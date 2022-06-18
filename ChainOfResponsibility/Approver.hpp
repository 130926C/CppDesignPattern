#ifndef _APPROVER_HPP_
#define _APPROVER_HPP_

#include <string>
#include "PurchaseRequest.hpp"

class Approver{
public:
    void setApprover(Approver* const approver){
        this->approver = approver;
    }

    explicit Approver(std::string name): name(name) {};

    virtual void processRequest(PurchaseRequest* reuqest) = 0;

    ~Approver() = default;

protected:
    Approver* approver;
    std::string name;
};



#endif 
#ifndef _CONCRETEAPPROVER_HPP_
#define _CONCRETEAPPROVER_HPP_

#include "Approver.hpp"
#include <iostream>

class DepartmentApprover: public Approver{
public:
    explicit DepartmentApprover(const std::string name): Approver(name) {};

    void processRequest(PurchaseRequest* request) override{
        if (request->getPrice() <= 5000){
            std::cout << "id=" << request->getId() << " deal by " << this->name << std::endl;
        }else{
            approver->processRequest(request);
        }
    }
};


class CollegeApprover: public Approver{
public:
    explicit CollegeApprover(const std::string name): Approver(name) {};

    void processRequest(PurchaseRequest* request) override{
        if (request->getPrice() > 5000 && request->getPrice() <= 10000){
            std::cout << "id=" << request->getId() << " deal by " << this->name << std::endl;
        }else{
            approver->processRequest(request);
        }
    }
};


class SchoolMasterApprover: public Approver{
public:
    explicit SchoolMasterApprover(const std::string name): Approver(name){};

    void processRequest(PurchaseRequest* request) override{
        std::cout << "id=" << request->getId() << " deal by " << this->name << std::endl;        
    }
};

#endif 
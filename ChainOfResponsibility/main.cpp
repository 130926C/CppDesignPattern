#include "ConcreteApprover.hpp"
#include "PurchaseRequest.hpp"

void test(){
    PurchaseRequest* request = new PurchaseRequest(1, 10050, 1);

    Approver* dApprover = new DepartmentApprover("zhuren");
    Approver* cApprover = new CollegeApprover("yuanzhang");
    Approver* sApprover = new SchoolMasterApprover("xiaozhang");

    dApprover->setApprover(cApprover);
    cApprover->setApprover(sApprover);

    dApprover->processRequest(request);
}


int main(){
    test();

    return 0;
}
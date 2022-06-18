#include "ConcreteAggregate.hpp"
#include "ConcreteIterator.hpp"

void test(){
    Aggregate* pName = new ConcreteAggregate();
    if (nullptr != pName){
        pName->Push("hello");
        pName->Push("world");
        pName->Push("cxue");
    }

    Iterator* iterator = pName->CreateIterator();
    if (nullptr != iterator){
        std::string strItem = iterator->First();
        while(!iterator->IsDone()){
            std::cout << iterator->CurrentItem() <<" is fine" << std::endl;
            iterator->Next();
        }
    }
}   


int main(){
    test();

    return 0;
}
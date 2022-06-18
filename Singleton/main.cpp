#include "Lazy.hpp"
#include "Hungry.hpp"

LazySingleTon* LazySingleTon::pInstance = nullptr;
HungrySingleTon* HungrySingleTon::pInstance = new HungrySingleTon();



int main(){
    LazySingleTon::getInstance();
    HungrySingleTon::getInstance();
    
    LazySingleTon::getInstance();

    return 0;
}
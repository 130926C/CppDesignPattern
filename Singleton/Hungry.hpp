#ifndef _HUNGRY_HPP_
#define _HUNGRY_HPP_

#include <iostream>

class HungrySingleTon{

public:
    static HungrySingleTon* getInstance(){
        std::cout << "Hungry instance is alreadly here" << std::endl;
        return pInstance;
    }

    static void freeSpace(){
        if (pInstance) delete pInstance;
    }

private:
    HungrySingleTon() { std::cout << "Hungry instance init" << std::endl;}
    static HungrySingleTon* pInstance;
};

#endif 
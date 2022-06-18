#ifndef _LAZY_HPP_
#define _LAZY_HPP_

#include <iostream>

class LazySingleTon{

public:
    static LazySingleTon* getInstance(){
        if (pInstance == nullptr){
            pInstance = new LazySingleTon();
            std::cout << "Lazy Singleton instance init" << std::endl;
        }else{
            std::cout << "Lazy Singleton is already here" << std::endl;
        }
        return pInstance;
    }

private:
    static LazySingleTon* pInstance;
    LazySingleTon(){}
};


#endif 
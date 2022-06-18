#ifndef _HANDLECLIENTPROTOCAL_HPP_
#define _HANDLECLIENTPROTOCAL_HPP_

#include <threads.h>
#include <iostream>

class HandleClientProtocal{

public:
    void AddMoney(){
        std::cout << "add Monery for hero" << std::endl;
    }

    void AddDiamond(){
        std::cout << "add Diamond for hero" << std::endl;
    }

    void AddLevel(){
        std::cout << "add Level for hero" << std::endl;
    }
};


#endif 
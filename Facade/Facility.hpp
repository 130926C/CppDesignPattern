#ifndef _FICILITY_HPP
#define _FICILITY_HPP

#include <iostream>

class Televsion{
public:
    void on(){
        std::cout << "Television On" << std::endl;
    }
    void off(){
        std::cout << "Television Off" << std::endl;    
    }
};

class Light{
public:
    void on(){
        std::cout << "Light On" << std::endl;
    }
    void off(){
        std::cout << "Light Off" << std::endl;
    }
};

class Audio{
public:
    void on(){
        std::cout << "Audio On" << std::endl;
    }
    void off(){
        std::cout << "Audio Off" << std::endl;
    }
};

class DVDPlayer{
public:
    void on(){
        std::cout << "Audio On" << std::endl;
    }
    void off(){
        std::cout << "Audio Off" << std::endl;
    }
};




#endif 
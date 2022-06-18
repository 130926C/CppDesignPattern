#ifndef _CONTEXT_HPP_
#define _CONTEXT_HPP_

#include <string>
#include "Flyweight.hpp"

class Tree{

public:
    Tree(double x, double y, TreeType* t): _x(x), _y(y), _type(t) {

    }

    void draw(std::string canvas){
        return _type->draw(canvas, _x, _y);
    }

private:
    double _x;
    double _y;
    TreeType * _type;
};


#endif 
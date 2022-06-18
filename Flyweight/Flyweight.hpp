#ifndef _FLYWEIGHT_HPP_
#define _FLYWEIGHT_HPP_

#include <string>

class TreeType{

public:
    TreeType(std::string name, std::string color, std::string texture): _name(name), _color(color), _texture(texture){

    };

    void draw(std::string canvas, double x, double y){
        return ;
    }


private:
    std::string _name;
    std::string _color;
    std::string _texture;
};


#endif 
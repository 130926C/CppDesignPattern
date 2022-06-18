#ifndef _CLIENT_HPP_
#define _CLIENT_HPP_

#include <vector>
#include <iostream>
#include <string>
#include "FlyweightFactory.hpp"
#include "Context.hpp"

class Forest{

public:
    void planTree(double x, double y, std::string name, std::string color, std::string texture){
        TreeType* type = TreeFactory::getInstance()->getTreeType(name, color, texture);
        Tree tree = Tree(x, y, type);
        trees_.push_back(tree);
    }

    void draw(){
        for (auto tree: trees_){
            tree.draw("canvas");
        }
    }


private:
    std::vector<Tree> trees_;
};

#endif 
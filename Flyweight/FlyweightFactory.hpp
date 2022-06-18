#ifndef _FLYWEIFGHTFACTORY_HPP_
#define _FLYWEIFGHTFACTORY_HPP_

#include <map>
#include <string>
#include <mutex>
#include "Flyweight.hpp"

class TreeFactory{

public:
    static TreeFactory* getInstance(){
        _mutex.lock();
        if (_instance == nullptr){
            _instance = new TreeFactory();
        }
        _mutex.unlock();
        return _instance;
    }

    TreeType* getTreeType(std::string name, std::string color, std::string texture){
        std::string key = name + "_" + color + "_" + texture;
        auto iter = _tree_types.find(key);
        if (iter == _tree_types.end()){
            TreeType* new_instance = new TreeType(name, color, texture);
            _tree_types[key] = new_instance;
            return new_instance;
        }else {
            return iter->second;
        }
    }

private:
    TreeFactory() {}
    static TreeFactory* _instance;
    static std::mutex _mutex;

    std::map<std::string, TreeType*> _tree_types;
};


#endif 
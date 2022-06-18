#include "FlyweightFactory.hpp"

TreeFactory* TreeFactory::_instance = nullptr;
std::mutex TreeFactory::_mutex;
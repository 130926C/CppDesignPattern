#ifndef _EXPRESSION_HPP_
#define _EXPRESSION_HPP_

#include "Context.hpp"

class Expression{
public:
    virtual void interpreter(Context* context) = 0;

    ~Expression() = default;
};


#endif 
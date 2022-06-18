#ifndef _CONCRETEEXPRESSION_HPP_
#define _CONCRETEEXPRESSION_HPP_

#include "Expression.hpp"

class PlusExpression: public Expression{
public:
    virtual void interpreter(Context* context) override{
        int num = context->getNum();
        num++;
        context->setNum(num);
        context->setRes(num);
    }
};

class MinusExpression: public Expression{
public:
    virtual void interpreter(Context* context) override{
        int num = context->getNum();
        num--;
        context->setNum(num);
        context->setRes(num);
    }

};


#endif
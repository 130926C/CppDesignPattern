#ifndef _APPLICATION_H_
#define _APPLICATION_H_

#include "Library.h"
#include <iostream>

using namespace std;

class Application: public Library{

protected:
    virtual bool Step2() { cout << "Step2" << endl; return true;}
    virtual void Step4() { cout << "Step4" << endl;}
    virtual void StepA() { cout << "Application StepA" << endl;}
};


#endif 
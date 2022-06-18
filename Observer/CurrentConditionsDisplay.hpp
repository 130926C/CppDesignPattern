#ifndef _CURRENTCONDITIONSDISPLAY_HPP_
#define _CURRENTCONDITIONSDISPLAY_HPP_

#include "Subject.hpp"
#include "Observer.hpp"
#include "DisplyElement.hpp"

#include <iostream>
#include <memory>

using namespace std;

class CurrentConditionDisplay: public DisplayElement, public Observer{

public:
    CurrentConditionDisplay(shared_ptr<Subject> w): temp(0.0f), humid(0.0f), weatherData(w){

    }
    ~CurrentConditionDisplay(){
        weatherData->registerObserver(this);
    }    

    void registerObserver(){
        weatherData->registerObserver(this);
    }

    void update(float t, float h, float p){
        temp = t;
        humid = h;
        display();
    }

    void display(){
        cout << "Current Conditions is: " << temp << "F degrees and " << humid << "% humidity" << endl;
    }

private:
    float temp;
    float humid;
    shared_ptr<Subject> weatherData;
};


#endif
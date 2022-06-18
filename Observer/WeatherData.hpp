#ifndef _WEATHERDATA_HPP_
#define _WEATHERDATA_HPP_

#include "Observer.hpp"
#include "Subject.hpp"

#include <unordered_set>

using namespace std;

class WeatherData: public Subject{

private:
    unordered_set<Observer*> observers;
    float temp;
    float humid;
    float presu;

public:
    void registerObserver(Observer* o){
        observers.insert(o);
    }
    void removeObserver(Observer* o){
        observers.erase(o);
    }
    void notifyObservers(){
        for(auto o: observers){
            o->update(temp, humid, presu);
        }
    }

    void measurementsChanged(){
        notifyObservers();
    }

    void setMeasurements(float t, float h, float p){
        temp = t;
        humid = h;
        presu = p;
        measurementsChanged();
    }



};


#endif 
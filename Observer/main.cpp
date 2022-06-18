#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"

void WeatherStationWithFunctions(){
    auto w = make_shared<WeatherData>();
    CurrentConditionDisplay* currentDisplay = new CurrentConditionDisplay(w);
    currentDisplay->registerObserver();
    w->setMeasurements(80, 65, 30.4f);
    w->setMeasurements(00, 55, 20);
    delete currentDisplay;
}

int main(){
    WeatherStationWithFunctions();

    return 0;
}
#ifndef _PIZZA_HPP_
#define _PIZZA_HPP_

#include <string>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Pizza{

public:
    string name;
    string dough;
    string sauce;
    vector<string> toppings;

    const string& getName() const;

    virtual void prepare() const;
    virtual void bake() const;
    virtual void cut() const;
    virtual void box() const;

    virtual ~Pizza() = default;
};

const string& Pizza::getName() const {
    return this->name;
}

void Pizza::prepare() const {
    cout << "Preparing " + getName() << endl;
    cout << "Tossing dough..." << endl;
    cout << "Adding sauce..." << endl;
    cout << "Adding toppings..." << endl;
    for(auto &topping: this->toppings){
        cout << "  " + topping << endl;
    }
}

void Pizza::bake() const {
    cout << "Baking for 25 min at 350 degrees" << endl;
}

void Pizza::cut() const {
    cout << "Cut the pizza into diagonal slices" << endl;
}

void Pizza::box() const {
    cout << "Boxing in official PizzaStore boxes" << endl;
}

ostream& operator<<(ostream& os, const Pizza& pizza){
    string str;
    str = "\n..." + pizza.getName() + "----\n";
    str.append(pizza.dough + "\n");
    str.append(pizza.sauce + "\n");

    for(auto& topping: pizza.toppings){
        str.append("  " + topping + "\n");
    }
    str.append("\n");
    return os << str;
}

#endif 
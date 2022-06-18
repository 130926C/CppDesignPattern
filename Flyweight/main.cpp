#include "Client.hpp"

int main(){

    Forest* forest = new Forest();

    for (int i=0; i<50; ++i){
        for (int j=0; j<50; ++j){
            double x = i;
            double y = j;
            forest->planTree(x, y, "shan", "red", "");
            forest->planTree(x, y, "rong", "gree", "");
            forest->planTree(x, y, "hua", "wite", "");
        }
    }

    forest->draw();

    return 0;
}
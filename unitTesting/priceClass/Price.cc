#include "Price.h"
#include <iomanip>
#include <iostream>

using namespace std;

Price::Price(){
    this->value = 0.00;
};

Price::Price(double value){
    this->value = value;
};


bool Price::equals(Price& p){
    if(this->value == p.value){return true;}
    return false;
};


bool Price::lessThan(Price& p){
    if(this->value < p.value){return true;}
    return false;
};


bool Price::inRange(Price& min, Price& max){
    if (this->value >= min.value && this->value <= max.value){return true;}
    return false;
};


void Price::print(){
    cout << "$" << fixed << setprecision(2) << this->value << endl;
};
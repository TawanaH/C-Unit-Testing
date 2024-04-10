#include <iostream>
#include <string>
#include <sstream>

#include "Price.h"

#define TEST_PASS 0
#define TEST_FAIL 1

int main(){
    //Prices
    Price p1(10.0);
    Price p2(10.0);
    Price p3(10.3);
    Price p4(5.0);
    Price p5(20.0);
    
    //Testing for equals()
    if (!p1.equals(p2)) {
        return TEST_FAIL;
    }
    if (p1.equals(p3)) {
        return TEST_FAIL;
    }


    //Testing for lessThan()
    if (p3.lessThan(p1)) {
        return TEST_FAIL;
    }
    if (p1.lessThan(p2)) {
        return TEST_FAIL;
    }


    //Testing for inRange()
    if (!p1.inRange(p2, p3)) {
        return TEST_FAIL;
    }
    if (!p1.inRange(p4, p2)) {
        return TEST_FAIL;
    }
    if (p4.inRange(p1, p5)) {
        return TEST_FAIL;
    }
    if (!p1.inRange(p4, p5)) {
        return TEST_FAIL;
    }


    return TEST_PASS;    
}


#ifndef PRICE_H
#define PRICE_H

#include <iostream>
#include <string>

using namespace std;

class Price {
	public:
		Price(double value);
		Price();

		bool lessThan(Price& p);
		bool equals(Price& p);	
		bool inRange(Price& min, Price& max);
		void print();
	
	private:
		double value;
};
#endif
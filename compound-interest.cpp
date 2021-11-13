#include <iostream>
#include <cmath>
#include "compound-interest.h"

using namespace std;

float compoundClass::compoundInterestCalculator(float principle, float rate, int year){

	float investment = principle * pow((1 + rate), year);
	return investment;
}
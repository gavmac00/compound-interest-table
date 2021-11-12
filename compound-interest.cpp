#include <iostream>
#include <cmath>
#include "compound-interest.h"

using namespace std;

float compoundClass::compoundInterestCalculator(float principle, float rate, int years){

	float investment = principle * pow((1 + rate), years);
	return investment;
}
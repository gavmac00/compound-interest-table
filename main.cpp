/* Gavin MacDonnell, Started on the 12 / 11 / 21. */

#include <iostream>
#include <string>
#include <iomanip>
#include "compound-interest.h"

using namespace std;

int main()
{
	//variables
	float priciple;

	float rate;				//lowest rate
	float rateStep;			//interest rate step size

	int year;				//lowest year
	int yearStep;			//year step size

	float investment;		//output value

	string xaxis[6];		//strings "10 Years"
	int years[6];			//the year number to add to each column in the x axis

	float yaxis[10];		//values in vertical axis "5.50" (%)

	float investments[60];	//output array for storing calculated values

	//input
	cout << "Enter the initial investment: ";
	cin >> priciple;

	cout << "\nEnter the starting % interest rate: ";
	cin >> rate;

	cout << "\nEnter the interest rate % step size: ";
	cin >> rateStep;

	cout << "\nEnter the lowest number of years: ";
	cin >> year;

	cout << "\nEnter the year step size: ";
	cin >> yearStep;

	//computation
	rate = rate / 100; //percentage to a decimal

	compoundClass run;
	investment = run.compoundInterestCalculator(priciple, rate, year);

	/*
	for (int i = 0; i < 61; i++) {
		investment = run.compoundInterestCalculator(priciple, rate, year); //calculates all 60 values
		investments[i] = investment;
	}
	*/

	//output
	cout << fixed;
	cout << setprecision(2);

	cout << "Rates"; 
	for (int x = 0; x < 6; x++) {
		years[x] = year + (x)*yearStep;					//creates years[array]
		xaxis[x] = to_string(years[x]) + " Years ";		//creates column titles
		cout << "	" << xaxis[x];
	}
	cout << "\n";

	for (int y = 0; y < 10; y++) {				//10 rows
		yaxis[y] = 100*rate + rateStep*(y);
		cout << yaxis[y] << "	";

		/*
		for (int xo = 0; xo < 6; xo++) {		//prints each slot per column
			int cell = y * 6 + xo;				//calculates what cell we are in this loop
			cout << investments[cell] << "	";	//prints
		}
		*/
		cout << "\n";
	}
}
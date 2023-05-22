#include <iostream>

using namespace std;

int main () {

	double sales = 95000;
	int stateTax = 4;
	int countyTax = 2;

	int total = 100;

	stateTax = (sales * stateTax) / total;
	countyTax = (sales * countyTax) / total;

	cout << "The total stateTax is " << stateTax << " and the countyTax is " << countyTax << endl
	     << "The total tax is " << stateTax + countyTax;

	return 0;
}
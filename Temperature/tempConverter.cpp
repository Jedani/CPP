#include <iostream>

using namespace std;

int main() {

	cout << "Enter your value in farenheight: " << endl;

	double farenheight;

	cin >> farenheight;

	double degrees = (farenheight - 32) / 1.8;

	cout << "Your temp in celsius is " << degrees;


	return 0;
}
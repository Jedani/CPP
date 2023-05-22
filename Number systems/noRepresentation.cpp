#include <iostream>

using namespace std;

int main() {

	int numOne = 17;
	int numTwo = 017;
	int numThree = 0x0f;
	int numFour = 0b01111;

	cout << "Number one is :" << numOne << endl
	     << "Number two is :" << numTwo << endl
	     << "Number three is :" << numThree << endl
	     << "Number four is :" << numFour << endl;

	return 0;
}
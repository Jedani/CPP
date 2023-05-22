#include <iostream>

//This is a small exercise to swap contents in variables a and b;

int main () {

	//Initialize two variables a and b;
	int a = 1;
	int b = 2;

	//Here we create a temporary place holder c;
	int c = a;
	//this is so we do not lose contents of one variable when we do the swap;


	//This is where the magic happens and we swap;
	a = b;
	b = c;

	std::cout << b;

	return 0;
}
#include <iostream>

using namespace std;

int main () {

	int* p_number {}; //this is how we declare a pointer in c++ and initialize it to zero
	double* p_num {};

	//here we initialise a variable and set its value to 45 and then a pointer to point to its address in memory

	int p_number1 {45};
	int* p_int {&p_number1};

	//character pointers form arrays and if dereferenced will point to the first element in that array, for instance

	char * p_message { "Hello World"};

	//we try to find the size of the pointer which is 8...

	cout << "size of pointer is :" << sizeof(p_num) << endl;

	//here we print the value of the pointer initialised above

	cout << "value of pointer in memory is :" << p_int << endl;

	//this here will print out the message pointer

	cout << "value of pointer message in memory is :" << *p_message << endl;

	//always remember to delete pointers and set them to nullptr to avoid memory leaks, for instance

	delete p_number;
	p_number = nullptr;

	delete p_num;
	p_num = nullptr;

	return 0;
}
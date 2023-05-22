#include <iostream>

using namespace std;

int main () {

	//static arrays vs dynamic arrays

	//static array

	int scores[5] {1, 2, 3, 4, 5};

	//this array lives in the stack and has a couple various functionalities that can be used alongside it, e.g
	// size can be used with range based for loops

	//dynamic array

	int* p_int {new int[] {1, 2, 3, 4, 5, 6}};

	//the array is stored in the heap~

	return 0;
}
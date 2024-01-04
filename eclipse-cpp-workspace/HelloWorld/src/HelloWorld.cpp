//============================================================================
// Name        : HelloWorld.cpp
// Author      : Hoyeol
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = arr;

	cout << "Pointer: " << *ptr << std::endl;;
	cout << "Pointer: " << *(ptr + 2) << std::endl;;

    return 0;
}

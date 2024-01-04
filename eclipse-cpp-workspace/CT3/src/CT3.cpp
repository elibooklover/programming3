//============================================================================
// Name        : CT3.cpp
// Author      : Hoyeol
//============================================================================

#include <iostream>
using namespace std;

int main() {
   int num1, num2, num3;
   int *pointer1, *pointer2, *pointer3;

   // Get inputs
   cout << "Enter three integer values: " << std::endl;
   cin >> num1 >> num2 >> num3;

   // Allocate memory for each
   pointer1 = new int;
   pointer2 = new int;
   pointer3 = new int;

   // Assign values
   *pointer1 = num1;
   *pointer2 = num2;
   *pointer3 = num3;

   // Display outputs
   cout << "Values of variables: " << std::endl;
   cout << "num1: " << num1 << std::endl;;
   cout << "num2: " << num2 << std::endl;;
   cout << "num3: " << num3 << std::endl;;

   cout << "Values of pointers: " << std::endl;
   cout << "*pointer1: " << *pointer1 << std::endl;;
   cout << "*pointer2: " << *pointer2 << std::endl;;
   cout << "*pointer3: " << *pointer3 << std::endl;;

   // Manage memory using delete operators
   delete pointer1;
   delete pointer2;
   delete pointer3;

   return 0;
}

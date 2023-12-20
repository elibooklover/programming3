//============================================================================
// Name        : CT1.cpp
// Author      : Hoyeol
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Declare variables
	std::string firstName, lastName, streetAddress, city, zipCode;

	// Get input
	std::cout << "Enter the first name: " <<endl;
	std::getline(std::cin, firstName);
	std::cout << "Enter the last name: " <<endl;
	std::getline(std::cin, lastName);
	std::cout << "Enter the street address: " <<endl;
	std::getline(std::cin, streetAddress);
	std::cout << "Enter the city name: " <<endl;
	std::getline(std::cin, city);
	std::cout << "Enter the zip code: " <<endl;
	std::getline(std::cin, zipCode);

	// Display the input
	std::cout << "\n" << "Name: " << lastName << ", " << firstName << "\n";
	std::cout << "Address: " << streetAddress << ", " << city << " " << zipCode;

	return 0;
}

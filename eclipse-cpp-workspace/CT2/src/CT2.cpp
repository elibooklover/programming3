//============================================================================
// Name        : CT2.cpp
// Author      : Hoyeol
// Description : Critical Thinking 2
//============================================================================

#include <iostream>
#include <cstring>

int main() {
    for (int i = 0; i < 3; ++i) {
        const int maxInputLength = 50; // Adjust the maximum length as needed
        char firstInput[maxInputLength];
        char secondInput[maxInputLength];

        // First input
        std::cout << "Enter the first word: ";
        std::cin.getline(firstInput, maxInputLength);

        // Second input
        std::cout << "Enter the second word: ";
        std::cin.getline(secondInput, maxInputLength);

        // Concatenate the two words
        char result[maxInputLength * 2];
        strcpy(result, firstInput);
        strcat(result, secondInput);

        // Print the output
        std::cout << "Output: " << result << "\n" << std::endl;
    }
    return 0;
}

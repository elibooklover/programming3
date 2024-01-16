//============================================================================
// Name        : CT5.cpp
// Author      : Hoyeol
// Description : Critical Thinking 5
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Function to append user input to a file
void appendToFile(const std::string& fileName, const std::string& data) {
    std::ofstream file;
    file.open(fileName, std::ios::app); // Open the file in append mode

    if (file.is_open()) {
        file << data << std::endl; // Append data to the file
        file.close(); // Close the file after appending data
        // Notify user about successful operation
        std::cout << "User inputs appended to " << fileName << std::endl;
    } else {
    	// Display error message if file opening fails
        std::cerr << "Error!" << fileName << std::endl;
    }
}

// Function to reverse the content of a file and save it to another file
void reverseFile(const std::string& inputFileName, const std::string& outputFileName) {
    std::ifstream inputFile(inputFileName);
    std::ofstream outputFile(outputFileName);

    if (inputFile.is_open() && outputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::reverse(line.begin(), line.end()); // Reverse the characters in the line
            outputFile << line << std::endl; // Write reversed line to the output file
        }

        inputFile.close(); // Close the input file after processing
        outputFile.close(); // Close the output file after writing reversed content
        // Notify user about successful operation
        std::cout << "File with reversed text was saved as " << outputFileName << std::endl;
    } else {
    	// Display error message if file opening fails
        std::cerr << "Error!" << std::endl;
    }
}

int main() {
    std::string userInput;

    // Get user input
    std::cout << "Enter text to append to the file: ";
    std::getline(std::cin, userInput);

    // Append user input to the file
    appendToFile("CSC450_CT5_mod5.txt", userInput);

    // Reverse the content of the file and store in a new file
    reverseFile("CSC450_CT5_mod5.txt", "CSC450-mod5-reverse.txt");

    return 0;
}

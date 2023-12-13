//============================================================================
// Name        : HelloWorld.cpp
// Author      : Hoyeol
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>

int main() {
    char buffer[5]; // Buffer with a size of 5

    // Attempt to copy a longer string into the buffer
    const char* source = "This is a longer string than the buffer can hold.";
    std::strcpy(buffer, source);

    // Display the content of the buffer
    std::cout << "Buffer content: " << buffer << std::endl;

    return 0;
}

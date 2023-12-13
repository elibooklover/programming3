#include <iostream>
#include <cstring>

int main() {
    char a[10] = "Hello";
    char b[] = " World!";
    strcat(a, b);
    std::cout << "Concatenated string: " << a << std::endl;
    return 0;
}

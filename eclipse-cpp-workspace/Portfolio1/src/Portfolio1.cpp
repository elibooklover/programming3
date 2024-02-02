//============================================================================
// Name        : Portfolio1.cpp
// Author      : Hoyeol
// Description : Portfolio1
//============================================================================

#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

// Declare a mutex for synchronization
mutex mtx;

// Function to count up
void countUp() {
    for (int i = 1; i <= 20; i++) {
    	// Use lock_guard for automatic locking and unlocking
        lock_guard<mutex> lock(mtx);
        cout << "Counting up: " << i << endl;
    }
}

// Function to count down
void countDown() {
    for (int i = 20; i >= 0; i--) {
    	// Use lock_guard for automatic locking and unlocking
        lock_guard<mutex> lock(mtx);
        cout << "Counting down: " << i << endl;
    }
}

// Main function
int main() {
    try {
        // Create two threads: one for counting up and one for counting down
        thread t1(countUp);
        thread t2(countDown);
        // Wait for both threads to finish before proceeding
        t1.join();
        t2.join();
    } catch (const exception& e) { // Deal with exceptions
        cerr << "Exception: " << e.what() << endl;
        return 1;
    }
    return 0;
}

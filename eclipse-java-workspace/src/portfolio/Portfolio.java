package portfolio;

/*
 * Reference: https://docs.oracle.com/javase/8/docs/api/java/util/concurrent/locks/ReentrantLock.html
 */

import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class Portfolio {
    // Shared variable to track countUp
    private static boolean countUp = false;
    private static final Lock lock = new ReentrantLock();

    public static void main(String[] args) {
        // Create two counter threads: t1 and t2
        Thread t1 = new Thread(() -> countUp());
        Thread t2 = new Thread(() -> countDown());

        // Start both threads
        t1.start();
        t2.start();

        try {
            // Wait for thread t1 to finish execution
            t1.join();
            // Wait for thread t2 to finish execution
            t2.join();
        } catch (InterruptedException e) {
            // Handle InterruptedException if the current thread is interrupted while waiting for t1 or t2 to finish.
            e.printStackTrace();
        }
    }

    // Method for counting up to 20
    private static void countUp() {
    	// Block until condition holds
        lock.lock();
        try {
            for (int i = 1; i <= 20; i++) {
                // Print counting up message
                System.out.println("Counting up: " + i);
            }
            // Set the flag to show counting up is finished
            countUp = true;
        } finally {
            lock.unlock(); // Release the lock
        }
    }

    // Method for counting down from 20 to 0
    private static void countDown() {
    	// Block until condition holds
        lock.lock();
        try {
            // Wait for counting up to finish
            while (!countUp) {
                // Allow the other thread to run
                Thread.yield();
            }

            for (int i = 20; i >= 0; i--) {
                // Print counting down message
                System.out.println("Counting down: " + i);
            }
        } finally {
        	// Release the lock
            lock.unlock();
        }
    }
}

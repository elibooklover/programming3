package module8;

import java.util.InputMismatchException;
import java.util.Scanner;

public class ExceptionHandlingExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
        	// Call the integerChecker method
            int userInput = integerChecker(scanner);
            System.out.println(userInput);
        } catch (InvalidInputException e) {
        	// Print error message
            System.out.println(e.getMessage());
        }
    }

    private static int integerChecker(Scanner scanner) throws InvalidInputException {
        System.out.print("Enter an integer: ");

        try {
        	// Read an integer
            return scanner.nextInt();
        } catch (InputMismatchException e) {
            // Use the invalid input to prevent an infinite loop
            scanner.next();
            // Throw exception
            throw new InvalidInputException("Invalid input. Please enter an integer.");
        }
    }
}

class InvalidInputException extends Exception {
    public InvalidInputException(String message) {
        super(message);
    }
}

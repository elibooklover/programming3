package module6;

import javax.crypto.Cipher;
import javax.crypto.spec.SecretKeySpec;
import java.security.Key;
import java.util.Base64;
import java.util.Scanner;

public class User {
    private String password;
    // Constructor
    public User() {
        this.password = encryptPassword(getInputForPassword());
    }
    // Getter
    public String getPassword() {
        return password;
    }
    // Get user input for the password
    private String getInputForPassword() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter password: ");
        return scanner.nextLine();
    }
    // Encrypt the user-provided password
    private String encryptPassword(String password) {
        try {
            // Create a key for AES encryption with a test secret key
        	// (you need to get a new secret key in real life)
            Key key = new SecretKeySpec("mySecretKey12345".getBytes(), "AES");
            
            // Initialize the AES cipher
            Cipher cipher = Cipher.getInstance("AES/ECB/PKCS5Padding");
            cipher.init(Cipher.ENCRYPT_MODE, key);
            
            // Encrypt the password and encode it in Base64
            byte[] encryptedPassword = cipher.doFinal(password.getBytes());
            return Base64.getEncoder().encodeToString(encryptedPassword);
        } catch (Exception e) {
            // Handle exceptions
            throw new RuntimeException(e);
        }
    }
    // Decrypt the stored password
    public String decryptPassword() {
        try {
            // Create a key for AES decryption with the same secret key
            Key key = new SecretKeySpec("mySecretKey12345".getBytes(), "AES");
            // Initialize the AES cipher
            Cipher cipher = Cipher.getInstance("AES/ECB/PKCS5Padding");
            cipher.init(Cipher.DECRYPT_MODE, key);  
            // Decode the Base64 encoded password and decrypt it
            byte[] decodedPassword = Base64.getDecoder().decode(password);
            byte[] decryptedPassword = cipher.doFinal(decodedPassword);
            // Convert the decrypted bytes back to a string
            return new String(decryptedPassword);
        } catch (Exception e) {
            // Handle exceptions by throwing a runtime exception
            throw new RuntimeException(e);
        }
    }
}




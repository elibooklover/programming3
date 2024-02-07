package module6;

public class UserTest {

    public static void main(String[] args) {
        testPassword();
    }

    private static void testPassword() {
        User user = new User(); // Get the password through user input
        String originalPassword = user.getPassword();

        System.out.println("Encrypted Password: " + originalPassword);

        String encryptedPassword = user.decryptPassword(); // Decrypt the password
        System.out.println("Decrypted Password: " + encryptedPassword);
    }
}


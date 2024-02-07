package module7;

public class ScopeExample {
    public static void main(String[] args) {
        int x = 3;
        if (x > 0) {
            int y = 10;
            System.out.println("x: " + x);
            System.out.println("y: " + y);
        }
        // y is not accessible here
        System.out.println("x: " + x);
//        System.out.println("y: " + y);
    }
}
public class Exception {
    public static void main(String[] args) {

        try {
            int x = 10;
            int y = 0;
            int result = (x / y); // Division by zero
            System.out.println("Result: " + result);
        } 
        catch (ArithmeticException e) {
            System.out.println("Exception: " + e); // Exception message
        }
        System.out.println("last line of the program"); // Fixed typo
    }
}





















































        
    }

}
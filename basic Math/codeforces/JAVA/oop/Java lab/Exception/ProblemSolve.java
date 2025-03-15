import java.util.Scanner;

public class ProblemSolve {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {
            try {
                System.out.println("Enter the first number (or type 'exit' to quit): ");
                String line1 = input.next();
                if (line1.equalsIgnoreCase("exit")) {
                    System.out.println("Exiting the program. Goodbye!");
                    break;
                }
                int num1 = Integer.parseInt(line1);

                System.out.println("Enter the second number: ");
                int num2 = input.nextInt();

                int result = num1 / num2;
                System.out.println("Result: " + num1 + " / " + num2 + " = " + result);
            } 
            catch (ArithmeticException e) {
                System.out.println("Exception: Division by zero is not allowed. Please try again.");
            } 
            catch (NumberFormatException e) {
                System.out.println("Exception: Invalid input. Please enter an integer.");
            } 
            catch ( Exception e) {
                System.out.println("Exception: " + e);
            }
        }

        input.close();
    }
}

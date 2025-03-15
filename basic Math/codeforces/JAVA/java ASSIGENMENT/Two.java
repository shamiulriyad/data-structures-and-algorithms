import java.util.Scanner;

public class Two {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first positive integer: ");
        int n1 = scanner.nextInt();
        
        System.out.print("Enter the second positive integer: ");
        int n2 = scanner.nextInt();

        if (n1 <= 0 || n2 <= 0) {
            System.out.println("Please enter positive integers.");
            return;
        }
        int gcd = findGCD(n1, n2);

        System.out.println("The GCD of " + n1 + " and " + n2 + " is " + gcd);
        scanner.close();
    }
    public static int findGCD(int n1, int n2) {
        int d = Math.min(n1, n2);

        for (int i = d; i >= 1; i--) {
            if (n1 % i == 0 && n2 % i == 0) {
                return i;
            }
        }
        return 1;
    }
}

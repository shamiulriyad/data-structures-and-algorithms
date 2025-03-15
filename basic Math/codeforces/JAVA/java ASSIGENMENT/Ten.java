import java.util.Scanner;

public class Ten {
    public static int[] getFibonacciSequence(int n) {
        if (n <= 0) return new int[0];
        if (n == 1) return new int[]{0};

        int[] fibonacci = new int[n];
        fibonacci[0] = 0;
        fibonacci[1] = 1;

        for (int i = 2; i < n; i++) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
        return fibonacci;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of terms for the Fibonacci sequence: ");
        int n = scanner.nextInt();
        int[] result = getFibonacciSequence(n);

        System.out.print("Fibonacci sequence: ");
        for (int num : result) {
            System.out.print(num + " ");
        }
        scanner.close();
    }
}

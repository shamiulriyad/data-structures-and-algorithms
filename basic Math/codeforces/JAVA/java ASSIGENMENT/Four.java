import java.util.Scanner;

public class Four {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] counts = new int[101];
        
        System.out.println("Enter integers between 1 and 100 (enter 0 to stop):");
        
        while (true) {
            int number = scanner.nextInt();
            
            if (number == 0) {
                break;
            }
            if (number >= 1 && number <= 100) {
                counts[number]++;
            } else {
                System.out.println("Please enter a number between 1 and 100.");
            }
        }
        
        System.out.println("\nOccurrences of numbers between 1 and 100:");
        for (int i = 1; i <= 100; i++) {
            if (counts[i] > 0) {
                System.out.println("Number " + i + ": " + counts[i] + " times");
            }
        }
        
        scanner.close();
    }
}

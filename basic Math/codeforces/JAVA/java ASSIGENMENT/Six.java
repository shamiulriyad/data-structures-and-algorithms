import java.util.Scanner;

public class Six {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] numbers = new int[10];
        int count = 0;

        System.out.println("Enter 10 numbers:");
        for (int i = 0; i < 10; i++) {
            int num = scanner.nextInt();
            if (isDistinct(numbers, num, count)) {
                numbers[count] = num;
                count++;
            }
        }

        System.out.println("Number of distinct numbers: " + count);
        System.out.print("Distinct numbers: ");
        for (int i = 0; i < count; i++) {
            System.out.print(numbers[i] + " ");
        }
    }

    public static boolean isDistinct(int[] numbers, int num, int count) {
        for (int i = 0; i < count; i++) {
            if (numbers[i] == num) {
                return false;
            }
        }
        return true;
    }
}

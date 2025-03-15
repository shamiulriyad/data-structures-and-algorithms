

import java.util.Scanner;

public class One {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int positive = 0;
        int nagetive = 0;
        int total = 0;
        int count = 0;
        for (int i = 0; i < 100; i++) {
            int number = scanner.nextInt();
            if (number == 0) {
                break;
            }
            if (number > 0) {
                positive++;
            } else {
                nagetive++;
            }
            total += number;
            count++;
        }
        if (count > 0) {
            double average = (double) total / count;
            System.out.println("Average: " + average);
        } else {
            System.out.println("Non zero");
        }

        scanner.close();
    }
}

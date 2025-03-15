import java.util.Scanner;

public class Twelve {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }
        boolean ans = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    ans = true;
                    break;
                }
            }
            if (ans) {
                break;
            }
        }

        if (ans) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }

        scanner.close();
    }
}

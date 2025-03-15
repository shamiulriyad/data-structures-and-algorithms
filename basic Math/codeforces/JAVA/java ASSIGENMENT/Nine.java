import java.util.Scanner;

public class Nine {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[][] lines = new int[n][];

        for (int i = 0; i < n; i++) {
            int d = scanner.nextInt();
            lines[i] = new int[d];
            for (int j = 0; j < d; j++) {
                lines[i][j] = scanner.nextInt();
            }
        }

        int q = scanner.nextInt();
        for (int i = 0; i < q; i++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            if (x > 0 && x <= n && y > 0 && y <= lines[x - 1].length) {
                System.out.println(lines[x - 1][y - 1]);
            } else {
                System.out.println("ERROR!");
            }
        }

        scanner.close();
    }
}

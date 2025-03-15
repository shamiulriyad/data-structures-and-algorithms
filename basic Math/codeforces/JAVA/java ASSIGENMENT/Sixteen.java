import java.util.Scanner;

class Sixteen {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        int m = 0;
        for (int i = 0; i < n; i++) {
            m = Math.max(m, a[i]);
        }

        int[] f = new int[m + 1];

        for (int i = 0; i < n; i++) {
            f[a[i]]++;
        }
        for (int i = 0; i < m + 1; i++) {
            if (f[i] > 0) {
                System.out.print(i + " ");
            }
        }
    }
}


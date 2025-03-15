import java.util.*;

public class Eight {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        String[] names = new String[n];
        int[] scores = new int[n];

        for (int i = 0; i < n; i++) {
            names[i] = scanner.next();
            scores[i] = scanner.nextInt();
        }

        Integer[] indices = new Integer[n];
        for (int i = 0; i < n; i++) {
            indices[i] = i;
        }

        Arrays.sort(indices, (a, b) -> scores[b] - scores[a]);

        for (int i : indices) {
            System.out.println(names[i] + " " + scores[i]);
        }

        scanner.close();
    }
}

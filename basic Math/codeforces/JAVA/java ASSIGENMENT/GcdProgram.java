import java.util.Scanner;

public class GcdProgram {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println();
        int n1 = scanner.nextInt();
        System.out.println();
        int n2 = scanner.nextInt();  
        if (n1 <= 0 || n2 <= 0) {
            System.out.println();
            return;
        }
        int d;
        if (n1 < n2) {
            d = n1;
        } else {
            d = n2;
        }
        int gcd = 1; 
        for (int i = d; i >= 1; i--) {
            if (n1 % i == 0 && n2 % i == 0) {
                gcd = i;
                break; 
            }
        }
        System.out.println( +gcd);
    }
}


import java.util.Scanner;

public class Sum {
    public static void main(String[] args) {
        Scanner num = new Scanner(System.in);
        System.out.println("Enter the number");
        int num1 = num.nextInt();
        System.out.println("Enter the number");
        int num2 = num.nextInt();

        int sum =0;
        sum = num1 +num2;

        System.out.println("sum is " + sum);


    }
    
}

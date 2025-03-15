import java.util.Scanner;

public class Input {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Input you name");
        String fname = input.next();
        System.out.println("Input you number");
        int  num = input.nextInt();

        System.out.println("HELLO\n"+fname+" "+num);
        


    }
    
}

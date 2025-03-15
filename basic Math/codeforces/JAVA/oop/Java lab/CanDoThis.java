
import java.util.Scanner;

public class CanDoThis {
    public static void main(String[] args) {
        Scanner hello = new Scanner (System.in);
        System.out.println("Enter your name : ");
        String Name = hello.next();
        System.out.println("Enter your Age : ");
        int  Age = hello.nextInt();
        System.out.println("Enter your cgpa: ");
        double cgpa = hello.nextDouble();
        hello.nextLine();

        System.out.println("Enter your dept : ");
        String dept = hello.nextLine();
        System.out.printf("Your Name: %s\n", Name);
        System.out.printf("Your age: %s\n", Age);
        System.out.printf("Your cgpa: %s\n", cgpa);
        System.out.printf("Your dept: %s\n", dept);

    } 
    
}

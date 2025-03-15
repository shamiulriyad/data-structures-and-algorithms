import java.util.Scanner;
class SampleReadInput{
public static void main (String[] args){
Scanner input = new Scanner (System.in);
System.out.println("Enter your name: ");
String name = input.next();
System.out.println("Enter your age: ");
int age = input.nextInt();
System.out.println("Enter your CGPA: ");
double cgpa = input.nextDouble();
input.nextLine();
System.out.println("Enter your department: ");
String department = input.nextLine();
System.out.printf("Your Name: %s\n", name);
System.out.printf("Your Age: %d\n", age);
System.out.printf("Your CGPA: %f\n", cgpa);
System.out.printf("Your Deparmtent: %s\n", department);
} 
} 
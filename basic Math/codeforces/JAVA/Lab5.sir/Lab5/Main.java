import java.util.Scanner;

public class Main {
    public static Scanner input = new Scanner(System.in);
    public static Icecream[] icecreams = new Icecream[10];
    public static int n = 0;
    // public Main(){

    // }
    // public static int getN(){
    //     n++;
    //     return n;
    // }
    public static void takeInput() {
        System.out.println("Type: ");
        String type = input.next();
        System.out.println("Company: ");
        String company = input.next();
        System.out.println("Price: ");
        double price = input.nextDouble();
        Icecream I = new Icecream(type, company, price);
        icecreams[n] = I;
        n++;
    }
    public static void displayIcecreams(){
        for (int j = 0; j < n; j++) {
            System.out.println(icecreams[j].toString());
        }
    }
    public static void displayByCompany(String company){

    }
    public static void maxIcecream(){
        
    }

    public static void main(String[] args) {
        while (true) {
            System.out.println("1. Enter an icecream\n2. Display\n3. Search by company\4. Maximum icecream\n0. Exit");
            int x = input.nextInt();
            if (x == 0)
                break;
            else if (x == 1) {
                takeInput();

            } else if (x == 2) {
                displayIcecreams();
            } else if(x==3){
                System.out.println("Enter ther company you want to search: ");
                String c = input.next();
                displayByCompany(c);
            } else if(x==4){
                maxIcecream();
            }
        }

    }
}

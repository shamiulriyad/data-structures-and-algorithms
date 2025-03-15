import java.util.Scanner;
 public class InputArray{
    public static void main(String[] args) {
        Scanner a1 = new Scanner(System.in);
        System.err.print("enter the size of array");
        int n = a1.nextInt();
        int[] arr = new int[n];
        System.err.println( +n );
        for(int i=0;i<n;i++){
            arr[i]=a1.nextInt();
        }





    }
 }
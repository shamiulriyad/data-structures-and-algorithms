import java.lang.*;
import java.util.*;
class SampleArray{
public static void main(String[] args){
// initializing an integer array numbers with size 10
int[] numbers = new int [10];
Scanner input = new Scanner (System.in);
// assigning values randomly
for(int i=0; i<numbers.length; i++){
numbers[i] = input.nextInt();
// numbers[i] = (int)(Math.random()*100);// Read random numbers
}
// displaying the values
for(int i=0; i<numbers.length; i++){
System.out.print(numbers[i] + " ");
}
}
}

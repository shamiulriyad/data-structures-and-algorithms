import java.util.Random;

public class Seven {
    public static void main(String[] args) {
        int[] numbers = new Random().ints(100, 0, 1000).toArray();

        int highest = Integer.MIN_VALUE, secondHighest = Integer.MIN_VALUE;
        int smallest = Integer.MAX_VALUE, secondSmallest = Integer.MAX_VALUE;
        int highestIdx = -1, secondHighestIdx = -1;
        int smallestIdx = -1, secondSmallestIdx = -1;

        for (int i = 0; i < numbers.length; i++) {
            int num = numbers[i];
            if (num > highest) {
                secondHighest = highest;
                secondHighestIdx = highestIdx;
                highest = num;
                highestIdx = i;
            } else if (num > secondHighest) {
                secondHighest = num;
                secondHighestIdx = i;
            }

            if (num < smallest) {
                secondSmallest = smallest;
                secondSmallestIdx = smallestIdx;
                smallest = num;
                smallestIdx = i;
            } else if (num < secondSmallest) {
                secondSmallest = num;
                secondSmallestIdx = i;
            }
        }

        System.out.println("Second Highest: " + secondHighest + " at index " + secondHighestIdx);
        System.out.println("Second Smallest: " + secondSmallest + " at index " + secondSmallestIdx);
    }
}

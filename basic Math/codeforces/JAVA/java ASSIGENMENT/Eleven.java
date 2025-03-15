import java.util.Scanner;

public class Eleven
 {
    public static String findLargestWord(String sentence) {
        if (sentence == null || sentence.isEmpty()) return "";

        String[] words = sentence.split(" ");
        String largestWord = "";

        for (String word : words) {
            if (word.length() > largestWord.length()) {
                largestWord = word;
            }
        }
        return largestWord;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a sentence: ");
        String sentence = scanner.nextLine();
        String largestWord = findLargestWord(sentence);

        System.out.println("Largest word: " + largestWord);
        scanner.close();
    }
}

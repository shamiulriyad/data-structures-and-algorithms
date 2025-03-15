import java.util.Scanner;

public class Three {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of students: ");
        int numStudents = scanner.nextInt();

        int[] scores = new int[numStudents];
        int bestScore = Integer.MIN_VALUE;
        System.out.println("Enter the scores of the students:");
        for (int i = 0; i < numStudents; i++) {
            scores[i] = scanner.nextInt();
            if (scores[i] > bestScore) {
                bestScore = scores[i];
            }
        }
        System.out.println("\nGrades:");
        for (int i = 0; i < numStudents; i++) {
            char grade = getGrade(scores[i], bestScore);
            System.out.println("Student " + (i + 1) + ": " + grade);
        }
        scanner.close();
    }
    public static char getGrade(int score, int bestScore) {
        if (score >= bestScore - 10) {
            return 'A';
        } else if (score >= bestScore - 20) {
            return 'B';
        } else if (score >= bestScore - 30) {
            return 'C';
        } else if (score >= bestScore - 40) {
            return 'D';
        } else {
            return 'F';
        }
    }
}

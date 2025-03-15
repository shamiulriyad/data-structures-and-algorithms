import java.util.Scanner;

public class StudentGrades {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt user for the total number of students
        System.out.print("Enter the total number of students: ");
        int numStudents = scanner.nextInt();

        // Array to store the student scores
        int[] scores = new int[numStudents];

        // Read scores for each student
        int bestScore = 0; // Variable to track the best score
        for (int i = 0; i < numStudents; i++) {
            System.out.print("Enter score for student " + (i + 1) + ": ");
            scores[i] = scanner.nextInt();
            if (scores[i] > bestScore) {
                bestScore = scores[i]; // Update the best score if current score is higher
            }
        }

        // Display the grades based on the best score
        System.out.println("\nGrades:");
        for (int i = 0; i < numStudents; i++) {
            System.out.print("Student " + (i + 1) + " score: " + scores[i] + " - ");
            char grade = getGrade(scores[i], bestScore);
            System.out.println("Grade: " + grade);
        }
    }

    // Method to determine the grade based on the best score
    private static char getGrade(int score, int bestScore) {
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

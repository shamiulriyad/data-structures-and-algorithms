
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
        ArrayList<Stduent> students = new ArrayList<>();
        ArrayList<Faculty> faculties = new ArrayList<>();
        ArrayList<Course> courses = new ArrayList<>();

        while (true) {
            System.out.println("\nMenu:");
            System.out.println("1. Add");
            System.out.println("2. Delete");
            System.out.println("3. Update");
            System.out.println("4. Print");
            System.out.println("5. Search");
            System.out.print("Choose an option: ");

            int choice = scanner.nextInt();


            switch (choice) {
                case 1:
                    System.out.println("1. Add a Student\n2. Add a Course\n3. Add a Faculty");
                    int addChoice = scanner.nextInt();
                    if (addChoice == 1) {
                        System.out.print("Enter Student ID, Name, CGPA: ");
                        students.add(new Stduent(scanner.nextInt(), scanner.next(), scanner.nextDouble()));
                    } else if (addChoice == 2) {
                        System.out.print("Enter Course ID, Title, Credit: ");
                        courses.add(new Course(scanner.next(), scanner.next(), scanner.nextDouble()));
                    } else if (addChoice == 3) {
                        System.out.print("Enter Faculty ID, Name, Position: ");
                        faculties.add(new Faculty(scanner.nextInt(), scanner.next(), scanner.next()));
                    }
                    break;

                case 2:
                    System.out.println("1. Delete a Student\n2. Delete a Course\n3. Delete a Faculty");
                    int deleteChoice = scanner.nextInt();
                    if (deleteChoice == 1) {
                        System.out.print("Enter Student ID to delete: ");
                        int studentId = scanner.nextInt();
                        students.removeIf(student -> student.getStduent_id() == studentId);
                    } else if (deleteChoice == 2) {
                        System.out.print("Enter Course ID to delete: ");
                        String courseid = scanner.next();
                        courses.removeIf(course -> course.getCourseid().equals(courseid));
                        
                    } else if (deleteChoice == 3) {
                        System.out.print("Enter Faculty ID to delete: ");
                        int facultyId = scanner.nextInt();
                        faculties.removeIf(faculty -> faculty.getFacultyID() == facultyId);
                    }
                    break;

                case 3:

                    break;

                case 4:
                    System.out.println("1. Print all Students\n2. Print all Courses\n3. Print all Faculties");
                    int printChoice = scanner.nextInt();
                    if (printChoice == 1) {
                        students.forEach(System.out::println);
                    } else if (printChoice == 2) {
                        courses.forEach(System.out::println);
                    } else if (printChoice == 3) {
                        faculties.forEach(System.out::println);
                    }
                    break;

                case 5: 
                
                    break;

                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }




        }
    }      

import java.util.Scanner;

public class SchoolManagementSystemMenu {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean exit = false;

        String name = "";
        int subjects = 0;
        double[] grades = null;
        double sum = 0;
        double avg = 0;
        String status = "";

        do {
            System.out.println("\nSchool Management System Menu:");
            System.out.println("1. Enter Student Data");
            System.out.println("2. Calculate Average Grade");
            System.out.println("3. Determine Pass/Fail Status");
            System.out.println("4. Display Performance Summary");
            System.out.println("5. Exit");
            System.out.print("Choose an option: ");

            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    System.out.print("Enter student's name: ");
                    name = scanner.nextLine();

                    System.out.print("Enter number of subjects: ");
                    subjects = scanner.nextInt();

                    while (subjects <= 0) {
                        System.out.print("Number of subjects must be greater than zero. Please re-enter: ");
                        subjects = scanner.nextInt();
                    }

                    grades = new double[subjects];
                    sum = 0;

                    for (int i = 0; i < subjects; i++) {
                        double grade;
                        do {
                            System.out.print("Enter grade for subject " + (i + 1) + ": ");
                            grade = scanner.nextDouble();
                            if (grade < 0 || grade > 100) {
                                System.out.println("Invalid grade. Enter value between 0 and 100.");
                            }
                        } while (grade < 0 || grade > 100);
                        grades[i] = grade;
                        sum += grade;
                    }
                    break;

                case 2:
                    if (grades != null) {
                        avg = sum / subjects;
                        System.out.println("Average Grade: " + avg);
                    } else {
                        System.out.println("Enter student data first.");
                    }
                    break;

                case 3:
                    if (grades != null) {
                        status = avg >= 60 ? "Pass" : "Fail";
                        System.out.println("Pass/Fail Status: " + status);
                    } else {
                        System.out.println("Enter student data and calculate average grade first.");
                    }
                    break;

                case 4:
                    if (grades != null) {
                        System.out.println("\nPerformance Summary:");
                        System.out.println("Student's Name: " + name);
                        System.out.println("Total Subjects: " + subjects);
                        System.out.println("Average Grade: " + avg);
                        System.out.println("Status: " + status);
                    } else {
                        System.out.println("Enter student data, calculate average grade, and determine pass/fail status first.");
                    }
                    break;

                case 5:
                    exit = true;
                    break;

                default:
                    System.out.println("Invalid option. Choose a valid option.");
                    break;
            }
        } while (!exit);
    }
}

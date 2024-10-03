import java.util.Scanner;

public class studentGrade {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 

        System.out.println("Enter the marks for 7 subjects:");

        int totalMarks = 0;
        for (int i = 1; i <= 7; i++) {
            int marks;
            do{
                System.out.print("Subject " + i + ": ");
                marks = scanner.nextInt();
            }
            while(marks > 100 );
            totalMarks += marks;

        }

        int averageMarks = totalMarks / 7;

        String grade;

        if (averageMarks >= 80) {
            grade = "A";
        } else if (averageMarks >= 70) {
            grade = "B";
        } else if (averageMarks >= 60) {
            grade = "C";
        } else if (averageMarks >= 50) {
            grade = "D"; 
        } else {
            grade = "F";
        }

        System.out.println("Student's grade: " + grade);
        System.out.println("Total Marks: " + totalMarks);

        scanner.close();
    }
}
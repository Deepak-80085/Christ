
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class AppendTextToFile {

    public static void main(String[] args) {
        try (FileOutputStream fos = new FileOutputStream("example.txt", true); Scanner scanner = new Scanner(System.in)) {

            System.out.print("Enter customer name: ");
            String customerName = scanner.nextLine();
            String text = customerName + "\n"; // Adding a new line for clarity

            fos.write(text.getBytes());
            System.out.println("Text appended to file successfully");

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

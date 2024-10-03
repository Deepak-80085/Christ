import java.io.FileInputStream;
import java.io.IOException;

public class ReadTextFromFile {
    public static void main(String[] args) {
        try (FileInputStream fis = new FileInputStream("example.txt")) {
            int content;
            while ((content = fis.read()) != -1) {
                // Print the character by converting byte to char
                System.out.print((char) content);
            }
            System.err.println("\nText read successfully");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
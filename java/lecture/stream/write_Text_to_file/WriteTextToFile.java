
import java.io.FileOutputStream;
import java.io.IOException;

public class WriteTextToFile {

    public static void main(String[] args) {
        try (FileOutputStream fos = new FileOutputStream("example.txt")) {
            String text = "hello world!";
            fos.write(text.getBytes());
            System.out.println("Text written to file successfully");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

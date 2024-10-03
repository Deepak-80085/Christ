
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class CopyFile {

    public static void main(String[] args) {
        try (FileInputStream fis = new FileInputStream("source.txt"); FileOutputStream fos = new FileOutputStream("destination.txt")) {

            int byteContent;
            // Read each byte from the source file and write it to the destination file
            while ((byteContent = fis.read()) != -1) {
                fos.write(byteContent);
            }

            System.out.println("File copied successfully!");

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

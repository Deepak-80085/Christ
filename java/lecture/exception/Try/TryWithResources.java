
import java.io.BufferedReader;



public class TryWithResources{
    public static void main(String[] args) {
        try (BufferedReader br= new BufferedReader)(new FileReader("test.txt")){
            String line;
            while(line = br.readLine()!= null){
                System.out.println(line);
            }
        } catch (Exception e) {
        }
    }
}

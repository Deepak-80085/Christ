
public class BasicExceptionHandling {

    public static void main(String[] args) {
        try {
            int[] numbers = {1, 2, 3,4,5,6,7};
            System.out.println(numbers[5]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Exception: " + e.getMessage());
        }
    }
}


public class MultipleExceptions {

    public static void main(String[] args) {
        try {
            int num = Integer.parseInt("12");
            int[] arr = new int[345];
        } catch (NumberFormatException | ArrayIndexOutOfBoundsException e) {
            System.out.println("Exception caught :" + e.getMessage());
        }
    }
}

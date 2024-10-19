
    import java.util.Scanner;


    public class register{
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            System.out.println("Registration Form");

            System.out.println("User Name : ");
            String user_name = scanner.nextLine();
            
            System.out.println("User ID : ");
            int user_id = scanner.nextInt();
            scanner.nextLine(); 

            System.out.println("Father Name : ");
            String father_name = scanner.nextLine();
            
            System.out.println("Mother Name : ");
            String mother_name = scanner.nextLine();

            
            System.out.println("Phone Name : ");
            int mobile_no = scanner.nextInt();
        System.out.println(user_name);
        System.out.println(user_id);
        System.out.println(father_name);
        System.out.println(mother_name);
        System.out.println(mobile_no);
        System.out.println(user_name);

        }
    }
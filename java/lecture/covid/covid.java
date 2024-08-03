
import java.util.Scanner;

public class covid {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Storing candidate name
        System.out.print("Enter your NAME : ");
        String name = scanner.nextLine();

        // Storing candidate age
        System.out.print("Enter your AGE : ");
        int age = Integer.parseInt(scanner.nextLine());

        // Storing candidate address
        System.out.print("Enter your ADDRESS [only your area name] : ");
        String address = scanner.nextLine();

        // Storing candidate date of birth
        System.out.print("Enter your DATE OF BIRTH : ");
        String dob = scanner.nextLine();

        do {
            if (age >= 18 && age < 90) {
                System.out.print("Have you taken covid vaccination before \n1)no \n2)yes\n\t");
                int dose = Integer.parseInt(scanner.nextLine());

                switch (dose) {
                    case 1:
                        System.out.println("\n----------------Dose 1: Today 7-Sept-2023");
                        System.out.println("\n----------------Dose 2: After 30 days....");
                        System.out.println("\n----------------Dose 3: After 30 days....");
                        break;

                    case 2:
                        System.out.print("Are you taken \nDose 1 \nDose 2 or \nDose 3....\n\t");
                        int second = Integer.parseInt(scanner.nextLine());
                        switch (second) {
                            case 1:
                                System.out.println("\n-------------Dose 2: Today 7-Sept-2023");
                                System.out.println("\n-------------Dose 3: After 30 days...");
                                break;
                            case 2:
                                System.out.println("\n-------------Dose 3: Today 7-Sept-2023");
                                break;
                            case 3:
                                System.out.println("\n--------------You have taken required vaccine doses for COVID");
                                break;
                        }
                        break;
                }
            } else if (age > 90 && age < 120) {
                System.out.println("Is there any medical condition[sugar][BLOOD PRESSURE]etc...\nPlease bring medical report from your Doctor.");
            }
            age++;
        } while (age < 5); // Note: This condition might not be what you intended

        scanner.close();
    }
}

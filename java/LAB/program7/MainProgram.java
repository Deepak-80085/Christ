import P1.*;
import P2.*;
import java.util.Scanner;

public class MainProgram {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get customer name and dog details
        System.out.print("Enter your name: ");
        String customerName = scanner.nextLine();
        
        System.out.print("Enter your dog's name: ");
        String dogName = scanner.nextLine();
        
        System.out.print("Enter your dog's breed: ");
        String dogBreed = scanner.nextLine();
        
        Dog dog = new Dog(dogName, dogBreed);

        // Welcome customer and provide options
        CustomerService customerService = new CustomerService();
        customerService.displayWelcomeMessage(customerName, dog);

        while (true) {
            System.out.println("\nOptions:");
            System.out.println("1. View available accessories");
            System.out.println("2. Check food inventory");
            System.out.println("3. Leave your dog for health checkup");
            System.out.println("4. Exit");
            System.out.print("Choose an option (1-4): ");
            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    customerService.displayAvailableAccessories();
                    System.out.print("Do you want to purchase an accessory? (yes/no): ");
                    String purchaseChoice = scanner.nextLine().toLowerCase();
                    if (purchaseChoice.equals("yes")) {
                        System.out.print("Enter the name of the accessory you want to buy: ");
                        String accessoryName = scanner.nextLine();
                        DogAccessory accessory = customerService.getAccessory(accessoryName);
                        if (accessory != null) {
                            System.out.println("You have selected: " + accessoryName);
                            System.out.println("Price: $" + accessory.getPrice());
                            System.out.print("Enter payment amount: $");
                            int payment = scanner.nextInt();
                            if (payment >= accessory.getPrice()) {
                                System.out.println("Payment successful! You purchased: " + accessoryName);
                                if (payment > accessory.getPrice()) {
                                    System.out.println("Your change: $" + (payment - accessory.getPrice()));
                                }
                            } else {
                                System.out.println("Insufficient payment. Purchase cancelled.");
                            }
                        } else {
                            System.out.println("Accessory not found.");
                        }
                    }
                    break;
                case 2:
                    customerService.showFoodInventory();
                    break;
                case 3:
                    HealthCheckup healthCheckup = new HealthCheckup();
                    healthCheckup.performHealthCheckup();
                    break;
                case 4:
                    System.out.println("Thank you for visiting the Pet Adoption Center!");
                    scanner.close();
                    return; // Exit the program
                default:
                    System.out.println("Invalid choice. Please choose a valid option.");
            }
        }
    }
}

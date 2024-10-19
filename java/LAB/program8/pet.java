import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class pet {

    public static void main(String[] args) {
        String filePath = "PetAdoptionCenter/customerRecords.txt";
        createDirectory("PetAdoptionCenter");
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\nWelcome to the Pet Adoption Center Records System!");
            System.out.println("1. Add Customer Details");
            System.out.println("2. Display All Customer Details");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");

            int choice = scanner.nextInt();
            scanner.nextLine(); 

            switch (choice) {
                case 1:
                    addCustomerDetails(filePath, scanner);
                    break;
                case 2:
                    displayAllCustomerDetails(filePath);
                    break;
                case 3:
                    System.out.println("Exiting the system. Thank you!");
                    scanner.close();
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please select a valid option.");
            }
        }
    }

    
    public static void createDirectory(String dirName) {
        File directory = new File(dirName);
        if (!directory.exists()) {
            directory.mkdir();
        }
    }

    
    public static void addCustomerDetails(String filePath, Scanner scanner) {
        FileWriter fileWriter = null;
        try {
            fileWriter = new FileWriter(filePath, true); 
            System.out.print("Enter Customer Name: ");
            String name = scanner.nextLine();

            System.out.print("Enter Dog's Name: ");
            String dogName = scanner.nextLine();

            System.out.print("Enter Dog's Breed: ");
            String breed = scanner.nextLine();

            System.out.print("Enter Service Needed (e.g., Food, Checkup, Boarding): ");
            String service = scanner.nextLine();

            
            fileWriter.write("Customer Name: " + name + "\n");
            fileWriter.write("Dog's Name: " + dogName + "\n");
            fileWriter.write("Dog's Breed: " + breed + "\n");
            fileWriter.write("Service Needed: " + service + "\n");
            fileWriter.write("--------------------------------------------------\n");

            System.out.println("Customer details added successfully.");
        } catch (IOException e) {
            System.out.println("An error occurred while writing to the file.");
            
        } finally {
            
            try {
                if (fileWriter != null) {
                    fileWriter.close();
                }
            } catch (IOException e) {
                System.out.println("An error occurred while closing the file writer.");
                
            }
        }
    }

    
    public static void displayAllCustomerDetails(String filePath) {
        FileReader fileReader = null;
        BufferedReader bufferedReader = null;
        try {
            File file = new File(filePath);
            if (!file.exists()) {
                throw new IOException("The file containing customer records was not found.");
            }

            fileReader = new FileReader(file);
            bufferedReader = new BufferedReader(fileReader);
            String line;
            System.out.println("\nCustomer Records:");
            while ((line = bufferedReader.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            System.out.println("An error occurred while reading from the file.");
            
        } finally {
            
            try {
                if (bufferedReader != null) {
                    bufferedReader.close();
                }
                if (fileReader != null) {
                    fileReader.close();
                }
            } catch (IOException e) {
                System.out.println("An error occurred while closing the file reader.");
                
            }
        }
    }
}

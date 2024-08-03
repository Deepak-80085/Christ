
import java.util.Scanner;

class UrbanElectricityBill {

    // Constructor for UrbanElectricityBill class
    public UrbanElectricityBill() {
        // Add code here to initialize the UrbanElectricityBill object
    }
}

class RuralElectricityBill {

    // Constructor for RuralElectricityBill class
    public RuralElectricityBill() {
        // Add code here to initialize the RuralElectricityBill object
    }
}

public class electricity_bill {

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the type of electricity bill you want to calculate: ");
        System.out.println("1. Urban Electricity Bill");
        System.out.println("2. Rural Electricity Bill");
        int choice = scan.nextInt();
        switch (choice) {
            case 1:
                UrbanElectricityBill urban = new UrbanElectricityBill();
                break;
            case 2:
                RuralElectricityBill rural = new RuralElectricityBill();
                break;
            default:
                System.out.println("Invalid choice");
        }
        scan.close();
    }
}

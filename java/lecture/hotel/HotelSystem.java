
import java.util.Scanner;

// Base class (Level 0)
class Restaurant {

    protected String name;
    protected String address;

    public Restaurant(String name, String address) {
        this.name = name;
        this.address = address;
    }

    public void displayInfo() {
        System.out.println("Restaurant: " + name);
        System.out.println("Address: " + address);
    }
}

// Level 1 class
class Discount5 extends Restaurant {

    public Discount5(String name, String address) {
        super(name, address);
    }

    public double applyDiscount(double total, double discountPercentage) {
        return total * (1 - discountPercentage / 100);
    }
}

class Discount15 extends Restaurant {

    public Discount15(String name, String address) {
        super(name, address);
    }

    public double applyDiscount(double total, double discountPercentage) {
        return total * (1 - discountPercentage / 100);
    }
}

// Level 2 class
class SouthIndian extends Discount5 {

    private static final double IDLY_PRICE = 15.0;
    private static final double DOSA_PRICE = 40.0;


    public SouthIndian(String name, String address) {
        super(name, address);
    }

    public double orderIdly(int plates) {
        return plates * IDLY_PRICE;
    }

    public double orderDosa(int plates) {
        return plates * DOSA_PRICE;
    }


}

class meals extends Discount15 {


    private static final double MEALS_PRICE = 100.0;

    public meals(String name, String address) {
        super(name, address);
    }

    public double orderMeals(int plates) {
        return plates * MEALS_PRICE;
    }
}

public class HotelSystem {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        SouthIndian southIndian = new SouthIndian("Spice Garden", "123 Main St, City");

        System.out.println("Menu:");
        System.out.println("1. Idly (Rs. 30 per plate)");
        System.out.println("2. Dosa (Rs. 40 per plate)");
        System.out.println("3. Meals (Rs. 100 per plate)");
        System.out.print("Enter your choice (1-3): ");
        int choice = scanner.nextInt();

        System.out.print("Enter the number of plates: ");
        int plates = scanner.nextInt();

        double totalBefore = 0;
        double discountPercentage = 0;
        String itemName = "";

        switch (choice) {
            case 1:
                totalBefore = southIndian.orderIdly(plates);
                discountPercentage = 5.0;
                itemName = "Idly";
                break;
            case 2:
                totalBefore = southIndian.orderDosa(plates);
                discountPercentage = 5.0;
                itemName = "Dosa";
                break;
            case 3:
                totalBefore = southIndian.orderMeals(plates);
                discountPercentage = 15.0;
                itemName = "Meals";
                break;
            default:
                System.out.println("Invalid choice. Exiting.");
                scanner.close();
                return;
        }

        double totalAfter = southIndian.applyDiscount(totalBefore, discountPercentage);
        double totalAfter = southIndian.applyDiscount(totalBefore, discountPercentage);
        System.out.println("\n----- Bill -----");
        southIndian.displayInfo();
        meals.displayInfo();
        System.out.printf("%s: %d plates\n", itemName, plates);
        System.out.printf("Total before discount: Rs. %.2f\n", totalBefore);
        System.out.printf("Discount applied: %.2f%%\n", discountPercentage);
        System.out.printf("Total after discount: Rs. %.2f\n", totalAfter);

        scanner.close();
    }
}

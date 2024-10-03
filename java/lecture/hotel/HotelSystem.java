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

// Level 1 class for Discount5
class Discount5 extends Restaurant {
    public Discount5(String name, String address) {
        super(name, address);
    }

    public double applyDiscount(double total, double discountPercentage) {
        return total * (1 - discountPercentage / 100);
    }
}

// Level 1 class for Discount15
class Discount15 extends Restaurant {
    public Discount15(String name, String address) {
        super(name, address);
    }

    public double applyDiscount(double total, double discountPercentage) {
        return total * (1 - discountPercentage / 100);
    }
}

// Level 2 class for SouthIndian
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

// Level 2 class for Meals
class Meals extends Discount15 {
    private static final double MEALS_PRICE = 100.0;

    public Meals(String name, String address) {
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
        Meals meals = new Meals("Spice Garden", "123 Main St, City"); // Create Meals object

        System.out.println("Menu:");
        System.out.println("1. Idly (Rs. 15 per plate)"); // Corrected price
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
                totalBefore = meals.orderMeals(plates); // Use Meals object for meals order
                discountPercentage = 15.0;
                itemName = "Meals";
                break;
            default:
                System.out.println("Invalid choice. Exiting.");
                scanner.close();
                return;
        }

        double totalAfter = 0;
        if (choice == 3) {
            totalAfter = meals.applyDiscount(totalBefore, discountPercentage); // Apply discount for meals
        } else {
            totalAfter = southIndian.applyDiscount(totalBefore, discountPercentage); // Apply discount for other items
        }

        System.out.println("\n----- Bill -----");
        if (choice == 3) {
            meals.displayInfo(); // Display info for meals
        } else {
            southIndian.displayInfo(); // Display info for other items
        }
        System.out.printf("%s: %d plates\n", itemName, plates);
        System.out.printf("Total before discount: Rs. %.2f\n", totalBefore);
        System.out.printf("Discount applied: %.2f%%\n", discountPercentage);
        System.out.printf("Total after discount: Rs. %.2f\n", totalAfter);

        scanner.close();
    }
}

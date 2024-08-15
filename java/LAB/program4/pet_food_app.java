
import java.util.ArrayList;
import java.util.Scanner;

class pet_food {

    String name;
    String animal_type;
    double price;
    int quantity;

    pet_food() {
        name = "generic pet food";
        animal_type = "all";
        price = 10.0;
        quantity = 100;
    }

    pet_food(String name, String animal_type, double price, int quantity) {
        this.name = name;
        this.animal_type = animal_type;
        this.price = price;
        this.quantity = quantity;
    }

    boolean update_quantity(int change) {
        if (quantity + change >= 0) {
            quantity += change;
            return true;
        }
        return false;
    }

    boolean update_quantity() {
        return update_quantity(-1);
    }

    String get_info() {
        return name + " for " + animal_type + " - $" + price + " (" + quantity + " in stock)";
    }

    String get_info(boolean detailed) {
        if (detailed) {
            return "Product: " + name + "\nAnimal Type: " + animal_type + "\nPrice: $" + price + "\nQuantity: " + quantity;
        }
        return get_info();
    }

    void set_price(double new_price) {
        price = new_price;
    }

    void display_details() {
        System.out.println(get_info());
    }

    String get_name() {
        return name;
    }

    double get_price() {
        return price;
    }
}

class purchase {

    String item_name;
    int quantity;
    double price;

    purchase() {
        item_name = "unknown item";
        quantity = 0;
        price = 0.0;
    }

    purchase(String item_name, int quantity, double price) {
        this.item_name = item_name;
        this.quantity = quantity;
        this.price = price;
    }

    double get_total() {
        return quantity * price;
    }

    String get_info() {
        return item_name + " x " + quantity + " - $" + String.format("%.2f", get_total());
    }
}

class pet_food_store {

    pet_food[] inventory;
    Scanner scan;
    ArrayList<purchase> purchases;

    pet_food_store() {
        inventory = new pet_food[5];
        inventory[0] = new pet_food("meow mix", "cat", 15.99, 50);
        inventory[1] = new pet_food("purina dog chow", "dog", 22.99, 40);
        inventory[2] = new pet_food("kaytee fiesta", "bird", 8.99, 30);
        inventory[3] = new pet_food("tetra flakes", "fish", 5.99, 60);
        inventory[4] = new pet_food();
        scan = new Scanner(System.in);
        purchases = new ArrayList<>();
    }

    void process_order(int index, int quantity) {
        if (index >= 0 && index < inventory.length) {
            if (inventory[index].update_quantity(-quantity)) {
                System.out.println("order processed successfully.");
                purchases.add(new purchase(inventory[index].get_name(), quantity, inventory[index].get_price()));
            } else {
                System.out.println("insufficient stock.");
            }
        } else {
            System.out.println("invalid product index.");
        }
    }

    void process_order(String name, int quantity) {
        for (int i = 0; i < inventory.length; i++) {
            if (inventory[i].get_info().toLowerCase().contains(name.toLowerCase())) {
                process_order(i, quantity);
                return;
            }
        }
        System.out.println("product not found.");
    }

    void display_inventory() {
        System.out.println("current inventory:");
        for (int i = 0; i < inventory.length; i++) {
            System.out.print(i + ": ");
            inventory[i].display_details();
        }
    }

    void execute() {
        System.out.println("welcome to the pet food store!");
        while (true) {
            System.out.println("\n1. view inventory");
            System.out.println("2. place order");
            System.out.println("3. update price");
            System.out.println("4. exit");
            System.out.print("enter your choice: ");
            int choice = scan.nextInt();
            scan.nextLine();

            switch (choice) {
                case 1:
                    display_inventory();
                    break;
                case 2:
                    place_order();
                    break;
                case 3:
                    update_price();
                    break;
                case 4:
                    display_bill();
                    System.out.println("thank you for using the pet food store. goodbye!");
                    return;
                default:
                    System.out.println("invalid choice. please try again.");
            }
        }
    }

    void place_order() {
        display_inventory();
        System.out.print("enter the product index or name: ");
        String input = scan.nextLine();
        System.out.print("enter the quantity: ");
        int quantity = scan.nextInt();
        scan.nextLine();

        try {
            int index = Integer.parseInt(input);
            process_order(index, quantity);
        } catch (NumberFormatException e) {
            process_order(input, quantity);
        }
    }

    void update_price() {
        display_inventory();
        System.out.print("enter the product index to update: ");
        int index = scan.nextInt();
        System.out.print("enter the new price: ");
        double new_price = scan.nextDouble();
        scan.nextLine();

        if (index >= 0 && index < inventory.length) {
            inventory[index].set_price(new_price);
            System.out.println("price updated successfully.");
        } else {
            System.out.println("invalid product index.");
        }
    }

    void display_bill() {
        System.out.println("\n----- your bill -----");
        if (purchases.isEmpty()) {
            System.out.println("no purchases made.");
            System.out.println("total: $0.00");
        } else {
            double total = 0;
            for (purchase p : purchases) {
                System.out.println(p.get_info());
                total += p.get_total();
            }
            System.out.println("-------------------");
            System.out.println("total: $" + String.format("%.2f", total));
        }
        System.out.println("--------------------");
    }
}

public class pet_food_app {

    public static void main(String[] args) {
        pet_food_store store = new pet_food_store();
        store.execute();
    }
}

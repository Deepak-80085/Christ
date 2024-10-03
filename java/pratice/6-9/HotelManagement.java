import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

abstract class MenuItem {
  public abstract double getPrice();
}

class Dish extends MenuItem {
  private String name;
  private double price;

  public Dish(String name, double price) {
    this.name = name;
    this.price = price;
  }

  public String getName() {
    return name;
  }

  public double getPrice() {
    return price;
  }

  @Override
  public String toString() {
    return "Dish Name: " + name + " $ " + price;
  }
}

class SpecialDish extends Dish {
  private String description;

  public SpecialDish(String name, double price, String description) {
    super(name, price);
    this.description = description;
  }

  public String getDescription() {
    return description;
  }

  @Override
  public String toString() {
    return super.toString() + " (: " + description + ")";
  }
}

public class HotelManagement {
  private static Map<String, MenuItem> menu = new HashMap<>();

  static {
    menu.put("Pasta", new Dish("Pasta", 12.99));
    menu.put("Pizza", new Dish("Pizza", 15.99));
    menu.put("Burger", new Dish("Burger", 10.99));
    menu.put("Salad", new SpecialDish("Salad", 9.99, "Healthy"));
  }

  public static void displayMenu() {
    System.out.println("Menu");
    for (MenuItem item : menu.values()) {
      System.out.println(item);
    }
  }

  public static double calculateBill(Map<String, Integer> order) {
    double total = 0;
    for (Map.Entry<String, Integer> entry : order.entrySet()) {
      MenuItem item = menu.get(entry.getKey());
      if (item != null) {
        total += item.getPrice() * entry.getValue();
      }
    }
    return total;
  }

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    Map<String, Integer> userOrder = new HashMap<>();

    displayMenu();

    while (true) {
      System.out.println("Enter the name of the dish you want to order (or 'done' to finish): ");
      String dishName = scanner.nextLine();
      if (dishName.equals("done")) {
        break;
      }

      MenuItem dish = menu.get(dishName);
      if (dish == null) {
        System.out.println("Invalid dish name");
        continue;
      }

      System.out.println("Enter the number of plates: ");
      int numberOfPlates = scanner.nextInt();
      scanner.nextLine(); // Consume the newline character

      userOrder.put(dishName, numberOfPlates);

      // Calculate the total price
      double total = calculateBill(userOrder);
      System.out.println("Total: $" + total);
    }

    scanner.close();

    // Ask for confirmation
    System.out.println("Confirm your order? (y/n)");
    String confirmation = scanner.nextLine();
    if (confirmation.equalsIgnoreCase("y")) {
      System.out.println("Order confirmed!");
    } else {
      System.out.println("Order canceled.");
    }
  }
}
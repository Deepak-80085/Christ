package P2;

import P1.*;
import java.util.ArrayList;
import java.util.List;

public class CustomerService {
    private List<DogAccessory> accessories;

    public CustomerService() {
        accessories = new ArrayList<>();
        // Adding some accessories
        accessories.add(new DogAccessory("Dog Food", 25));
        accessories.add(new DogAccessory("Dog Chain", 15));
        accessories.add(new DogAccessory("Dog Bed", 30));
        accessories.add(new DogAccessory("Dog Toys", 10));
    }

    public void displayWelcomeMessage(String customerName, Dog dog) {
        System.out.println("Welcome " + customerName + " and your dog " + dog.getName() + "!");
        dog.displayDetails();
        System.out.println("How can we assist you today?");
    }

    public void displayAvailableAccessories() {
        System.out.println("Available Accessories:");
        for (DogAccessory accessory : accessories) {
            accessory.displayAccessory();
        }
    }

    public DogAccessory getAccessory(String name) {
        for (DogAccessory accessory : accessories) {
            if (accessory.getAccessoryName().toLowerCase().contains(name.toLowerCase())) {
                return accessory;
            }
        }
        return null; // If not found
    }

    public void showFoodInventory() {
        System.out.println("Available Food Inventory: ");
        System.out.println("1. Premium Dog Food - $25");
        System.out.println("2. Organic Dog Food - $30");
        System.out.println("3. Grain-free Dog Food - $35");
    }
}

package P1;

public class DogAccessory {
    private String accessoryName;
    private int price;

    public DogAccessory(String accessoryName, int price) {
        this.accessoryName = accessoryName;
        this.price = price;
    }

    public void displayAccessory() {
        System.out.println("Accessory: " + accessoryName + ", Price: $" + price);
    }

    public int getPrice() {
        return price;
    }

    public String getAccessoryName() {
        return accessoryName;
    }
}

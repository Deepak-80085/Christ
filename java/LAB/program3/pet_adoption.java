import java.util.Scanner;

class pet {
    private final String type;
    private final String sub_type;
    private final int price;

    public pet(String type, String sub_type, int price) {
        this.type = type;
        this.sub_type = sub_type;
        this.price = price;
    }

    public String get_type() { return type; }
    public String get_sub_type() { return sub_type; }
    public int get_price() { return price; }
}

class adoption_center {
    private final Scanner scan;
    private int dogs, cats, birds, fish;

    public adoption_center(int dogs, int cats, int birds, int fish) {
        this.scan = new Scanner(System.in);
        this.dogs = dogs;
        this.cats = cats;
        this.birds = birds;
        this.fish = fish;
    }

    public void display() {
        System.out.println("Available pets: dogs: " + dogs + ", cats: " + cats + 
                           ", birds: " + birds + ", fish: " + fish);
    }

    public pet adopt_pet(String type) {
        return adopt_pet(type, null);
    }

    public pet adopt_pet(String type, String sub_type) {
        pet adopted_pet = null;

        switch (type.toLowerCase()) {
            case "dog":
                if (dogs > 0) {
                    if (sub_type == null) sub_type = dog();
                    adopted_pet = new pet("dog", sub_type, 100);
                    dogs--;
                }
                break;
            case "cat":
                if (cats > 0) {
                    if (sub_type == null) sub_type = cat();
                    adopted_pet = new pet("cat", sub_type, 75);
                    cats--;
                }
                break;
            case "bird":
                if (birds > 0) {
                    if (sub_type == null) sub_type = bird();
                    adopted_pet = new pet("bird", sub_type, 50);
                    birds--;
                }
                break;
            case "fish":
                if (fish > 0) {
                    if (sub_type == null) sub_type = fish();
                    adopted_pet = new pet("fish", sub_type, 25);
                    fish--;
                }
                break;
        }

        return adopted_pet;
    }

    public void return_pet(String type) {
        switch (type.toLowerCase()) {
            case "dog" -> dogs++;
            case "cat" -> cats++;
            case "bird" -> birds++;
            case "fish" -> fish++;
        }
    }

    private String dog() {
        System.out.println("Choose a dog breed:");
        System.out.println("1. labrador");
        System.out.println("2. german shepherd");
        System.out.println("3. poodle");
        System.out.print("Enter your choice (1-3): ");
        int choice = scan.nextInt();
        scan.nextLine();
        return switch (choice) {
            case 1 -> "labrador";
            case 2 -> "german shepherd";
            case 3 -> "poodle";
            default -> "mixed breed";
        };
    }

    private String cat() {
        System.out.println("Choose a cat color:");
        System.out.println("1. black");
        System.out.println("2. white");
        System.out.println("3. orange");
        System.out.print("Enter your choice (1-3): ");
        int choice = scan.nextInt();
        scan.nextLine();
        return switch (choice) {
            case 1 -> "black";
            case 2 -> "white";
            case 3 -> "orange";
            default -> "mixed color";
        };
    }

    private String bird() {
        System.out.println("Choose a bird species:");
        System.out.println("1. parakeet");
        System.out.println("2. canary");
        System.out.println("3. finch");
        System.out.print("Enter your choice (1-3): ");
        int choice = scan.nextInt();
        scan.nextLine();
        return switch (choice) {
            case 1 -> "parakeet";
            case 2 -> "canary";
            case 3 -> "finch";
            default -> "mixed species";
        };
    }

    private String fish() {
        System.out.println("Choose a fish type:");
        System.out.println("1. goldfish");
        System.out.println("2. betta");
        System.out.println("3. guppy");
        System.out.print("Enter your choice (1-3): ");
        int choice = scan.nextInt();
        scan.nextLine();
        return switch (choice) {
            case 1 -> "goldfish";
            case 2 -> "betta";
            case 3 -> "guppy";
            default -> "mixed type";
        };
    }
}

public class pet_adoption {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        adoption_center center = new adoption_center(5, 3, 4, 10);

        System.out.print("Please enter your name: ");
        String name = scan.nextLine().trim();

        System.out.println("Welcome back, " + name + "!");

        System.out.print("You've expressed interest . Which type did you choose? (dog/cat/bird/fish): ");
        String pet_type = scan.nextLine().trim().toLowerCase();

        pet adopted_pet = center.adopt_pet(pet_type);

        if (adopted_pet != null) {
            System.out.println("You've chosen a " + adopted_pet.get_sub_type() + " " + adopted_pet.get_type());
            System.out.println("The adoption fee is $" + adopted_pet.get_price());
            System.out.print("Enter payment amount: $");
            int payment = scan.nextInt();
            scan.nextLine();

            if (payment >= adopted_pet.get_price()) {
                System.out.println("Congratulations! You've adopted a " + adopted_pet.get_sub_type() + " " + adopted_pet.get_type() + ".");
                if (payment > adopted_pet.get_price()) {
                    System.out.println("Your change: $" + (payment - adopted_pet.get_price()));
                }
            } else {
                System.out.println("Insufficient payment. Adoption cancelled.");
                center.return_pet(adopted_pet.get_type());
            }
        } else {
            System.out.println("Sorry, that pet is not available.");
        }

        System.out.println("Thank you for visiting, " + name + "!");
        center.display();
        scan.close();
    }
}
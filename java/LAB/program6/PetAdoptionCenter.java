
import java.util.ArrayList;
import java.util.Scanner;

// Animal interface
interface Animal {

    String getName();

    String getSpecies();

    int getAge();
}

// Adoptable interface
interface Adoptable {

    boolean isAdopted();

    void adopt();
}

// Carable interface
interface Carable {

    void feed();

    void groom();
}

// Pet class implementing multiple interfaces
class Pet implements Animal, Adoptable, Carable {

    private String name;
    private String species;
    private int age;
    private boolean adopted;

    public Pet(String name, String species, int age) {
        this.name = name;
        this.species = species;
        this.age = age;
        this.adopted = false;
    }

    // Animal interface methods
    @Override
    public String getName() {
        return name;
    }

    @Override
    public String getSpecies() {
        return species;
    }

    @Override
    public int getAge() {
        return age;
    }

    // Adoptable interface methods
    @Override
    public boolean isAdopted() {
        return adopted;
    }

    @Override
    public void adopt() {
        adopted = true;
        System.out.println(name + " has been adopted!");
    }

    // Carable interface methods
    @Override
    public void feed() {
        System.out.println(name + " has been fed.");
    }

    @Override
    public void groom() {
        System.out.println(name + " has been groomed.");
    }
}

// Main class to run the program
public class PetAdoptionCenter {

    private static ArrayList<Pet> pets = new ArrayList<>();
    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.println("Welcome to the Pet Adoption Center!");
        while (true) {
            System.out.println("\n1. Add a pet");
            System.out.println("2. List pets");
            System.out.println("3. Adopt a pet");
            System.out.println("4. Care for a pet");
            System.out.println("5. Exit");
            System.out.print("Choose an option: ");

            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    addPet();
                    break;
                case 2:
                    listPets();
                    break;
                case 3:
                    adoptPet();
                    break;
                case 4:
                    carePet();
                    break;
                case 5:
                    System.out.println("Thank you for using the Pet Adoption Center!");
                    return;
                default:
                    System.out.println("Invalid option. Please try again.");
            }
        }
    }

    private static void addPet() {
        System.out.print("Enter pet name: ");
        String name = scanner.nextLine();
        System.out.print("Enter pet species: ");
        String species = scanner.nextLine();
        System.out.print("Enter pet age: ");
        int age = scanner.nextInt();
        scanner.nextLine(); // Consume newline
        pets.add(new Pet(name, species, age));
        System.out.println(name + " has been added to the adoption center.");
    }

    private static void listPets() {
        if (pets.isEmpty()) {
            System.out.println("No pets available in the adoption center.");
            return;
        }
        System.out.println("Pets in the adoption center:");
        for (Pet pet : pets) {
            System.out.println(pet.getName() + " - " + pet.getSpecies() + ", "
                    + pet.getAge() + " years old (Adopted: " + pet.isAdopted() + ")");
        }
    }

    private static void adoptPet() {
        if (pets.isEmpty()) {
            System.out.println("No pets available for adoption.");
            return;
        }
        System.out.print("Enter the name of the pet you want to adopt: ");
        String name = scanner.nextLine();
        for (Pet pet : pets) {
            if (pet.getName().equalsIgnoreCase(name) && !pet.isAdopted()) {
                pet.adopt();
                return;
            }
        }
        System.out.println("Pet not found or already adopted.");
    }

    private static void carePet() {
        if (pets.isEmpty()) {
            System.out.println("No pets available to care for.");
            return;
        }
        System.out.print("Enter the name of the pet you want to care for: ");
        String name = scanner.nextLine();
        for (Pet pet : pets) {
            if (pet.getName().equalsIgnoreCase(name)) {
                System.out.println("1. Feed");
                System.out.println("2. Groom");
                System.out.print("Choose a care option: ");
                int careChoice = scanner.nextInt();
                scanner.nextLine(); // Consume newline
                switch (careChoice) {
                    case 1:
                        pet.feed();
                        break;
                    case 2:
                        pet.groom();
                        break;
                    default:
                        System.out.println("Invalid care option.");
                }
                return;
            }
        }
        System.out.println("Pet not found.");
    }
}

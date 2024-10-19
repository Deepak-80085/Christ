import java.util.ArrayList;
import java.util.Scanner;

interface Soundable {
    void makeSound();
}

interface Displayable {
    void displayInfo();
}

interface Playable {
    void play();
}

class Animal implements Soundable, Displayable {
    protected String name;
    protected int age;
    protected String healthStatus;

    public Animal(String name, int age, String healthStatus) {
        this.name = name;
        this.age = age;
        this.healthStatus = healthStatus;
    }

    @Override
    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Health Status: " + healthStatus);
    }

    @Override
    public void makeSound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal implements Playable {
    private final String breed;

    public Dog(String name, int age, String healthStatus, String breed) {
        super(name, age, healthStatus);
        this.breed = breed;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Breed: " + breed);
    }

    @Override
    public void makeSound() {
        System.out.println(name + " barks: Woof! Woof!");
    }

    @Override
    public void play() {
        System.out.println(name + " is playing fetch!");
    }
}

class ServiceDog extends Dog {
    private final String specialization;

    public ServiceDog(String name, int age, String healthStatus, String breed, String specialization) {
        super(name, age, healthStatus, breed);
        this.specialization = specialization;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Specialization: " + specialization);
    }

    public void performDuty() {
        System.out.println(name + " is performing its duty as a " + specialization + " service dog.");
    }
}

class Cat extends Animal implements Playable {
    private final boolean isIndoor;

    public Cat(String name, int age, String healthStatus, boolean isIndoor) {
        super(name, age, healthStatus);
        this.isIndoor = isIndoor;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Indoor Cat: " + (isIndoor ? "Yes" : "No"));
    }

    @Override
    public void makeSound() {
        System.out.println(name + " meows: Meow! Meow!");
    }

    @Override
    public void play() {
        System.out.println(name + " is playing with a toy mouse!");
    }
}

public class PetAdoptionCenter {
    private static final ArrayList<Animal> animals = new ArrayList<>();
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.println("Welcome to the Pet Adoption Center!");

        while (true) {
            System.out.println("\nWhat would you like to do?");
            System.out.println("1. Add a new animal");
            System.out.println("2. Display all animals");
            System.out.println("3. Interact with an animal");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");

            int choice = getIntInput();

            switch (choice) {
                case 1:
                    addNewAnimal();
                    break;
                case 2:
                    displayAllAnimals();
                    break;
                case 3:
                    interactWithAnimal();
                    break;
                case 4:
                    System.out.println("Thank you for using the Pet Adoption Center. Goodbye!");
                    return;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }

    private static void addNewAnimal() {
        System.out.println("\nWhat type of animal would you like to add?");
        System.out.println("1. Dog");
        System.out.println("2. Service Dog");
        System.out.println("3. Cat");
        System.out.print("Enter your choice: ");

        int choice = getIntInput();

        System.out.print("Enter name: ");
        String name = scanner.nextLine();
        System.out.print("Enter age: ");
        int age = getIntInput();
        System.out.print("Enter health status: ");
        String healthStatus = scanner.nextLine();

        switch (choice) {
            case 1:
                System.out.print("Enter breed: ");
                String breed = scanner.nextLine();
                animals.add(new Dog(name, age, healthStatus, breed));
                break;
            case 2:
                System.out.print("Enter breed: ");
                breed = scanner.nextLine();
                System.out.print("Enter specialization: ");
                String specialization = scanner.nextLine();
                animals.add(new ServiceDog(name, age, healthStatus, breed, specialization));
                break;
            case 3:
                System.out.print("Is it an indoor cat? (true/false): ");
                boolean isIndoor = getBooleanInput();
                animals.add(new Cat(name, age, healthStatus, isIndoor));
                break;
            default:
                System.out.println("Invalid choice. Animal not added.");
                return;
        }
        System.out.println("Animal added successfully!");
    }

    private static void displayAllAnimals() {
        if (animals.isEmpty()) {
            System.out.println("No animals in the adoption center.");
            return;
        }
        System.out.println("\nAnimals in the adoption center:");
        for (int i = 0; i < animals.size(); i++) {
            System.out.println("\nAnimal " + (i + 1) + ":");
            animals.get(i).displayInfo();
        }
    }

    private static void interactWithAnimal() {
        if (animals.isEmpty()) {
            System.out.println("No animals in the adoption center.");
            return;
        }
        System.out.print("Enter the number of the animal you want to interact with: ");
        int index = getIntInput() - 1;

        if (index < 0 || index >= animals.size()) {
            System.out.println("Invalid animal number.");
            return;
        }

        Animal animal = animals.get(index);
        System.out.println("\nInteracting with " + animal.name + ":");
        animal.makeSound();

        if (animal instanceof Playable playable) {
            playable.play();
        }
        if (animal instanceof ServiceDog serviceDog) {
            serviceDog.performDuty();
        }
    }

    private static int getIntInput() {
        while (true) {
            try {
                return Integer.parseInt(scanner.nextLine());
            } catch (NumberFormatException e) {
                System.out.print("Invalid input. Please enter a number: ");
            }
        }
    }

    private static boolean getBooleanInput() {
        while (true) {
            String input = scanner.nextLine().toLowerCase();
            if (input.equals("true")) return true;
            if (input.equals("false")) return false;
            System.out.print("Invalid input. Please enter 'true' or 'false': ");
        }
    }
}

import java.util.Scanner; // For taking user input

// Abstract Class (Abstraction)
abstract class Animal {

    protected String name;  // Protected (Encapsulation) allows access in subclasses

    // Constructor
    public Animal(String name) {
        this.name = name;
    }

    // Abstract Method
    public abstract void makeSound();  // To be implemented in subclasses

    // Non-abstract Method
    public void displayInfo() {
        System.out.println("Animal Name: " + name);
    }
}

// Class Dog (Inheritance: Single Inheritance)
class Dog extends Animal {

    private int age;  // Encapsulation using private

    // Constructor using super
    public Dog(String name, int age) {
        super(name);  // Calls the parent class's constructor
        this.age = age; // Using 'this' to reference instance variable
    }

    // Implement abstract method (Method Overriding)
    @Override
    public void makeSound() {
        System.out.println(name + " says Woof!");
    }

    // Getter and Setter for age (Encapsulation)
    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    // Overloaded method (Method Overloading)
    public void bark(int times) {
        for (int i = 0; i < times; i++) {
            System.out.println("Woof!");
        }
    }

    public void bark(String type) {
        System.out.println(type + " bark!");
    }
}

// Class Cat (Inheritance: Hierarchical Inheritance)
class Cat extends Animal {

    public Cat(String name) {
        super(name);  // Calling the parent constructor
    }

    // Implement abstract method (Method Overriding)
    @Override
    public void makeSound() {
        System.out.println(name + " says Meow!");
    }
}

// Main Class
public class Main {

    // Method demonstrating control flow, operators, and user input
    public static void displayOptions() {
        System.out.println("1. Dog");
        System.out.println("2. Cat");
        System.out.print("Choose an option: ");
    }

    public static void main(String[] args) {
        // Data Types and Variables
        int userChoice;
        double price = 100.50;  // Example of a double
        String greeting = "Welcome to the Animal Sound Program";  // String

        // Operators
        double discountedPrice = price * 0.9;  // Using multiplication operator

        // Printing the greeting and price
        System.out.println(greeting);
        System.out.printf("Special price after discount: %.2f\n", discountedPrice);

        // Scanner for taking user input
        Scanner scanner = new Scanner(System.in);

        // Control Flow (If-else, switch)
        displayOptions();  // Calling a static method
        userChoice = scanner.nextInt();

        Animal animal;

        switch (userChoice) {
            case 1:
                // Creating an object of Dog class (Object Creation)
                animal = new Dog("Buddy", 5);
                break;
            case 2:
                // Creating an object of Cat class
                animal = new Cat("Whiskers");
                break;
            default:
                System.out.println("Invalid choice!");
                return;
        }

        // Polymorphism: Method Overriding (calling the overridden makeSound method)
        animal.makeSound();
        animal.displayInfo();

        // Example of casting to access Dog-specific methods
        if (animal instanceof Dog) {
            Dog dog = (Dog) animal;
            dog.bark(3);  // Calling overloaded method (Method Overloading)1
        }

        // Close scanner
        scanner.close();
    }
}

import java.util.Scanner;

public class PetAdoption_1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int dogs = 10;
        int cats = 5;

        System.out.print("Enter your name: ");
        String name = scan.nextLine().trim();

        System.out.println("\nAdopter Information:");
        System.out.println("Name: " + name);
        System.out.println(".------------------------------------------------------------------.");
        System.out.println("\nWelcome to the Pet Adoption Center, " + name + "!");
        System.out.println("Available dogs: " + dogs);
        System.out.println("Available cats: " + cats);
        System.out.println("Total pets available: " + (dogs + cats));

        boolean continueAdopting = true;
        while (continueAdopting) {
            System.out.print("\nEnter the type of pet you want to adopt (dog/cat): ");
            String pet_type = scan.nextLine().trim().toLowerCase();

            switch (pet_type) {
                case "dog":
                    if (dogs > 0) {
                        dogs--;
                        System.out.println("\nCongratulations! You've chosen to adopt a dog.");
                        continueAdopting = false; // Exit loop after successful adoption
                    } else {
                        System.out.println("Sorry, no dogs available for adoption.");
                    }
                    break;
                case "cat":
                    if (cats > 0) {
                        cats--;
                        System.out.println("\nCongratulations! You've chosen to adopt a cat.");
                        continueAdopting = false; // Exit loop after successful adoption
                    } else {
                        System.out.println("Sorry, no cats available for adoption.");
                    }
                    break;
                default:
                    System.out.println("Invalid pet type. Please choose either 'dog' or 'cat'.");
            }
        }
        System.out.println(".------------------------------------------------------------------.");
        System.out.println("\nRemaining pets:");
        System.out.println("Available dogs: " + dogs);
        System.out.println("Available cats: " + cats);

    }
}

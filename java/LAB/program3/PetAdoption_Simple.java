import java.util.Scanner;

public class PetAdoption_Simple {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int dogs = 5;
        int cats = 3;

        System.out.print("Enter your name: ");
        String name = scan.nextLine().trim();
        System.out.println("Welcome to the Pet Adoption Center, " + name + "!");

        while (true) {
            System.out.println("\nAvailable pets: Dogs: " + dogs + ", Cats: " + cats);
            System.out.print("Do you want to adopt a pet? (yes/no): ");
            String answer = scan.nextLine().trim().toLowerCase();

            if (answer.equals("no")) {
                break;
            }

            System.out.print("Which pet do you want to adopt? (dog/cat): ");
            String petType = scan.nextLine().trim().toLowerCase();

            if (petType.equals("dog") && dogs > 0) {
                dogs--;
                System.out.println("Congratulations! You've adopted a dog.");
            } else if (petType.equals("cat") && cats > 0) {
                cats--;
                System.out.println("Congratulatsions! You've adopted a cat.");
            } else {
                System.out.println("Sorry, that pet is not available.");
            }
        }

        System.out.println("Thank you for visiting, " + name + "!");
        System.out.println("Remaining pets: Dogs: " + dogs + ", Cats: " + cats);
    }
}
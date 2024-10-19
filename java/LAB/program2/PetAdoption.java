import java.util.Scanner;

public class PetAdoption {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int dogs = 5;
        int cats = 3;
        int birds = 4;

        System.out.print("Enter your name: ");
        String name = scan.nextLine().trim();
        System.out.println("Welcome to the Pet Adoption Center, " + name + "!");

        while (true) {
            System.out.println("\nAvailable pets: Dogs: " + dogs + ", Cats: " + cats + ", Birds: " + birds);
            System.out.print("Do you want to adopt a pet? (yes/no): ");
            if (scan.nextLine().trim().toLowerCase().equals("no")) {
                break;
            }

            System.out.print("Which pet do you want to adopt? (dog/cat/bird): ");
            String petType = scan.nextLine().trim().toLowerCase();

            int adoptionFee = 0;
            boolean validChoice = true;

            switch (petType) {
                case "dog":
                    if (dogs > 0) {
                        dogs--;
                        adoptionFee = 100;
                    } else {
                        System.out.println("Sorry, no dogs available.");
                        validChoice = false;
                    }
                    break;
                case "cat":
                    if (cats > 0) {
                        cats--;
                        adoptionFee = 75;
                    } else {
                        System.out.println("Sorry, no cats available.");
                        validChoice = false;
                    }
                    break;
                case "bird":
                    if (birds > 0) {
                        birds--;
                        adoptionFee = 50;
                    } else {
                        System.out.println("Sorry, no birds available.");
                        validChoice = false;
                    }
                    break;
                default:
                    System.out.println("Invalid pet type.");
                    validChoice = false;
            }

            if (validChoice) {
                System.out.println("Congratulations! You've adopted a " + petType + ".");
                System.out.println("Adoption fee: $" + adoptionFee);
                System.out.print("Enter payment amount: $");
                int payment = scan.nextInt();
                scan.nextLine(); // Consume newline

                if (payment >= adoptionFee) {
                    System.out.println("Payment successful. Enjoy your new pet!");
                    if (payment > adoptionFee) {
                        System.out.println("Your change: $" + (payment - adoptionFee));
                    }
                } else {
                    System.out.println("Insufficient payment. Adoption cancelled.");
                    // Reverse the adoption
                    if (petType.equals("dog")) {
                        dogs++; 
                    }else if (petType.equals("cat")) {
                        cats++; 
                    }else if (petType.equals("bird")) {
                        birds++;
                    }
                }
            }
        }

        System.out.println("Thank you for visiting, " + name + "!");
        System.out.println("Remaining pets: Dogs: " + dogs + ", Cats: " + cats + ", Birds: " + birds);
        scan.close();
    }
    
}
 
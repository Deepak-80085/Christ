public class dataTypes {
    public static void main(String[] args) {
        // Acquiring basic information
        String name = "Franky";
        String petName = "Chopper";
        int age = 5;
        double height = 1.75;
        boolean hasPet = true;

        
        display(name,petName, age, height, hasPet);
    }

    public static void display(String name, String petName, int age, double height, boolean hasPet) {
        
        System.out.println("Welcome to Wano Pet Adoption Management!");
        System.out.println("----------------------------------------------");
        System.out.println("Name: " + name);
        System.out.println("Pet Name: " + petName);
        System.out.println("Age: " + age);
        System.out.println("Height: " + height );
        System.out.println("Has a pet: " + hasPet);
    }
}
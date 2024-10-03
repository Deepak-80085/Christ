import java.util.List;

class Pet {
    String name;
    String breed;
    int age;
    String species;
    String description;
    String status; // "available", "adopted", etc.

    // Constructor, getters, setters

    @Override
    public String toString() {
        return name + "," + breed + "," + age + "," + species + "," + description + "," + status;
    }
}

public class PetAdoptionCenter {
    // ... (rest of your code)

    public static void savePetsToFile(List<Pet> pets, String fileName) {
        // ... (rest of the savePetsToFile method)
    }
}
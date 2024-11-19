import java.io.*;
import java.util.ArrayList;
import javax.swing.*;

// Main class that combines all functionalities
public class PetAdoptionSystem {
    // Inner class to represent a Pet
    private static class Pet implements Adoptable, Serializable {
        private String name;
        private String species;
        private boolean isAdopted;

        public Pet(String name, String species) {
            this.name = name;
            this.species = species;
            this.isAdopted = false;
        }

        public String getName() {
            return name;
        }

        public String getSpecies() {
            return species;
        }

        public boolean isAdopted() {
            return isAdopted;
        }

        @Override
        public void adopt() {
            isAdopted = true;
        }

        @Override
        public String toString() {
            return name + " (" + species + ")" + (isAdopted ? " - Adopted" : " - Available");
        }
    }

    // Inner interface for adoptable pets
    private interface Adoptable {
        void adopt();
    }

    // Custom exception class for handling pet-related errors
    private static class PetException extends Exception {
        public PetException(String message) {
            super(message);
        }
    }

    // ArrayList to store pets
    private ArrayList<Pet> pets = new ArrayList<>();
    private final String fileName = "pets.txt";

    // Main method
    public static void main(String[] args) {
        new PetAdoptionSystem().start();
    }

    // Start the application
    private void start() {
        loadPets();
        showMenu();
    }

    // Display the menu to the user
    private void showMenu() {
        String[] options = {"Add Pet", "View Pets", "Adopt Pet", "Save and Exit"};
        while (true) {
            int choice = JOptionPane.showOptionDialog(null, "Choose an option", "Pet Adoption Center",
                    JOptionPane.DEFAULT_OPTION, JOptionPane.INFORMATION_MESSAGE, null, options, options[0]);

            switch (choice) {
                case 0 -> addPet();
                case 1 -> viewPets();
                case 2 -> adoptPet();
                case 3 -> {
                    savePets();
                    System.exit(0);
                }
                default -> JOptionPane.showMessageDialog(null, "Invalid option");
            }
        }
    }

    // Add a new pet
    private void addPet() {
        String name = JOptionPane.showInputDialog("Enter pet name:");
        String species = JOptionPane.showInputDialog("Enter pet species:");
        try {
            validateInput(name, species);
            pets.add(new Pet(name, species));
            JOptionPane.showMessageDialog(null, "Pet added successfully");
        } catch (PetException e) {
            JOptionPane.showMessageDialog(null, e.getMessage());
        }
    }

    // View all pets
    private void viewPets() {
        StringBuilder petList = new StringBuilder("Pet List:\n");
        for (Pet pet : pets) {
            petList.append(pet).append("\n");
        }
        JOptionPane.showMessageDialog(null, petList.toString());
    }

    // Adopt a pet
    private void adoptPet() {
        String petName = JOptionPane.showInputDialog("Enter the pet's name to adopt:");
        try {
            for (Pet pet : pets) {
                if (pet.getName().equalsIgnoreCase(petName) && !pet.isAdopted()) {
                    pet.adopt();
                    JOptionPane.showMessageDialog(null, petName + " has been adopted!");
                    return;
                }
            }
            throw new PetException("Pet not found or already adopted.");
        } catch (PetException e) {
            JOptionPane.showMessageDialog(null, e.getMessage());
        }
    }

    // Validate the input for adding a new pet
    private void validateInput(String name, String species) throws PetException {
        if (name == null || name.trim().isEmpty() || species == null || species.trim().isEmpty()) {
            throw new PetException("Please provide both pet name and species.");
        }
    }

    // Load the list of pets from a file
    private void loadPets() {
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(fileName))) {
            pets = (ArrayList<Pet>) ois.readObject();
        } catch (IOException | ClassNotFoundException e) {
            // If file doesn't exist, start with an empty list
            pets = new ArrayList<>();
        }
    }

    // Save the list of pets to a file
    private void savePets() {
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(fileName))) {
            oos.writeObject(pets);
            JOptionPane.showMessageDialog(null, "Pets saved successfully.");
        } catch (IOException e) {
            JOptionPane.showMessageDialog(null, "Error saving pets.");
        }
    }
}

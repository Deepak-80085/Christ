// develop a java program which consists of java packages with respect your domian

// the requirements are as follows
// 1. consider a domain for developing the package application
// 2. consider all basic programming concepts of your domain as a base package and define accordingly
// 3. develop operational methods in the base package


Base package: com.petadoption.base
// package com.petadoption;

import java.util.ArrayList;
import java.util.List;

class Pet {
    String id;
    String name;
    String species;
    boolean isAdopted;

    Pet(String id, String name, String species) {
        this.id = id;
        this.name = name;
        this.species = species;
        this.isAdopted = false;
    }

    @Override
    public String toString() {
        return "Pet{id='" + id + "', name='" + name + "', species='" + species + "', adopted=" + isAdopted + "}";
    }
}

class AdoptionCenter {
    private List<Pet> pets = new ArrayList<>();

    void addPet(Pet pet) {
        pets.add(pet);
        System.out.println("Added: " + pet);
    }

    void adoptPet(String id) {
        for (Pet pet : pets) {
            if (pet.id.equals(id) && !pet.isAdopted) {
                pet.isAdopted = true;
                System.out.println("Adopted: " + pet);
                return;
            }
        }
        System.out.println("Pet not found or already adopted.");
    }

    void displayPets() {
        if (pets.isEmpty()) {
            System.out.println("No pets available.");
        } else {
            for (Pet pet : pets) {
                System.out.println(pet);
            }
        }
    }
}

public class PetAdoptionSystem {
    public static void main(String[] args) {
        AdoptionCenter center = new AdoptionCenter();

        // Add pets
        center.addPet(new Pet("D1", "Buddy", "Dog"));
        center.addPet(new Pet("C1", "Whiskers", "Cat"));
        center.addPet(new Pet("R1", "Hoppy", "Rabbit"));

        // Display all pets
        System.out.println("\nAll pets:");
        center.displayPets();

        // Adopt a pet
        System.out.println("\nAdopting a pet:");
        center.adoptPet("C1");

        // Display updated pet list
        System.out.println("\nUpdated pet list:");
        center.displayPets();
    }
}
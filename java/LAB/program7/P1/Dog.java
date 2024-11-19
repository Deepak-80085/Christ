package P1;

public class Dog {
    private String name;
    private String breed;

    public Dog(String name, int par, String breed, String dogBreed1) {
        this.name = name;
        this.breed = breed;
    }


    public void displayDetails() {
        System.out.println("Dog Name: " + name + ", Breed: " + breed);
    }

    public String getName() {
        return name;
    }

    public String getBreed() {
        return breed;
    }
}

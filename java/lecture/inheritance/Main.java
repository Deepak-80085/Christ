class animal {
    void eat() {
        {
            System.out.println("THe animal eats food");
        }
    }
}

class Dog extends animal {

    void bark() {
        System.out.println("The dog barks");
    }
}

public class Main {

    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.eat();
        myDog.bark();
    }
}

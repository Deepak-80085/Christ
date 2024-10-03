
abstract class Animal {

    public abstract void makeSound();

    public void eat() {
        System.out.println("Eats food");
    }
}
    class Dog extends Animal {

        @Override
        public void makeSound() {
            System.out.println("Woof");
        }
    }

    class Cat extends Animal {

        @Override
        public void makeSound() {
            System.out.println("Meow");
        }
    }

    public class Main {

        public static void main(String[] args) {
            Animal myDog = new Dog();
            Animal myCat = new Cat();

            myDog.makeSound();
            myCat.makeSound();

            myDog.eat();
            myCat.eat();
        }
    }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
class Person {

    Person() {
        System.out.println("Person Constructor");
    }
}

class Student extends Person {

    Student() {
        super();
        System.out.println("Student constructor");
    }
}

public class Main {

    public static void main(String[] args) {
        Student student = new Student();
        System.out.println(student);
        Person person = new Person();
        System.out.println(person);
    }
}



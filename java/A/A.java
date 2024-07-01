// Develop a java program/method for demonstration of the different variables and datatypes.This method should
// should have at least 8 var with associated value and DT

// 1 Read the input value,store them in an appropriate var with specific DT
// 2 Display the stores value of all var in a proper display format

public class A {
    static int m = 100; // static variable
    int n = 90; // instance variable

    public static void main(String args[]) {
        int data = 50; // local variable
        System.out.println(data);
        
        A obj = new A();
        System.out.println("n = " + obj.n);
        System.out.println("m = " + m);
    }
}


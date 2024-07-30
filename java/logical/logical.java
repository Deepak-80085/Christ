public class logical{
    public static void main(String[] args) {
        boolean a = true;
        boolean b = false;

        boolean ans1 = a && b;
        boolean ans2 = a || b;
        boolean ans3 = !a;

        System.out.println("a && b = " + ans1);
        System.out.println("a || b = " + ans2);
        System.out.println("!a = " + ans3);
    }
}
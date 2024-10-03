
class Shape {

    void draw() {
        System.out.println("Drawing a shape");
    }
}

class Circle extends Shape {

    @Override
    void draw() {
        System.out.println("Drawing a circle");
    }
}

public class shapes {

    public static void main(String[] args) {
        Shape myShape = new Circle();
        Shape myCircle = new Shape();
        Circle cir = new Circle();
        cir.draw();
        myCircle.draw();
        myShape.draw();

    }
}

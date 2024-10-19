import java.awt.*;

public class awtex extends Frame {
    awtex()
     {
        Button b = new Button("Click me");
        b.setBounds(30, 100, 80, 30);
        add(b);
        setTitle("BASE");
        setSize(300, 300);
        setLayout(null);
        setVisible(true);
    }
    public static void main(String[] args) {
        awtex a = new awtex();
    }
}


 

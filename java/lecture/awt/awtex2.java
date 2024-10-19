import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;


public class awtex2 {

     awtex2() {
        Frame f = new Frame("AWT Example");

        Label l = new Label("Employee ID");
        f.setLayout(null);

        TextField t = new TextField();
        l.setBounds(20, 50, 80, 30);
        t.setBounds(100, 50, 80, 30);


        Button b = new Button("Click me");
        b.setBounds(30, 100, 80, 30);
        f.add(l);
        f.add(t);
        f.add(b);

        f.setTitle("BASE");
        f.setSize(300, 300);

        f.setVisible(true);

        f.addWindowFocusListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                f.dispose();;
            }
        });
    }
    public static void main(String[] args) {
        new awtex2();
    }
    
}

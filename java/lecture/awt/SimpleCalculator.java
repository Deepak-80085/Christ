import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class SimpleCalculator {

    public static void main(String[] args) {
        JFrame f = new JFrame("Simple Calculator");
        f.setSize(300, 400);
        f.setLayout(null);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);

        JTextField t1 = new JTextField(10);
        t1.setBounds(20, 20, 250, 30);
        f.add(t1);

        JTextField t2 = new JTextField(10);
        t2.setBounds(20, 70, 250, 30);
        f.add(t2);

        JLabel resultLabel = new JLabel("Result");
        resultLabel.setBounds(20, 120, 250, 30);
        f.add(resultLabel);

        JButton addButton = new JButton("Add");
        addButton.setBounds(20, 170, 250, 30);
        f.add(addButton);

        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                try {
                    double num1 = Double.parseDouble(t1.getText());
                    double num2 = Double.parseDouble(t2.getText());
                    double result = num1 + num2;
                    resultLabel.setText("Result: " + result);
                } catch (NumberFormatException ex) {
                    resultLabel.setText("Invalid input");
                }
            }
        });
    }
}
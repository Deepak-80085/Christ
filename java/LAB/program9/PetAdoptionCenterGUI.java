import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import javax.swing.table.DefaultTableModel;

public class PetAdoptionCenterGUI extends JFrame {
    private JTextField customerNameField, dogNameField, dogBreedField;
    private JComboBox<String> serviceComboBox;
    private JButton addButton, clearButton;
    private JTable recordsTable; 
    
    private DefaultTableModel tableModel;

    public PetAdoptionCenterGUI() {
        setTitle("Pet Adoption Center");
        setSize(600, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setLayout(new BorderLayout());

        JPanel inputPanel = new JPanel();
        inputPanel.setLayout(new GridLayout(5, 2, 10, 10));

        customerNameField = new JTextField();
        dogNameField = new JTextField();
        dogBreedField = new JTextField();

        String[] services = {"Health Checkup", "Temporary Care", "Grooming", "Training", "Vaccination"};
        serviceComboBox = new JComboBox<>(services);

        inputPanel.add(new JLabel("Customer Name:"));
        inputPanel.add(customerNameField);
        inputPanel.add(new JLabel("Dog's Name:"));
        inputPanel.add(dogNameField);
        inputPanel.add(new JLabel("Dog's Breed:"));
        inputPanel.add(dogBreedField);
        inputPanel.add(new JLabel("Service Needed:"));
        inputPanel.add(serviceComboBox);

        addButton = new JButton("Add Record");
        clearButton = new JButton("Clear Fields");
        inputPanel.add(addButton);
        inputPanel.add(clearButton);

        JPanel tablePanel = new JPanel();
        tablePanel.setLayout(new BorderLayout());

        String[] columnNames = {"Customer Name", "Dog's Name", "Dog's Breed", "Service Needed"};
        tableModel = new DefaultTableModel(columnNames, 0);
        recordsTable = new JTable(tableModel);
        JScrollPane scrollPane = new JScrollPane(recordsTable);
        tablePanel.add(scrollPane, BorderLayout.CENTER);

        add(inputPanel, BorderLayout.NORTH);
        add(tablePanel, BorderLayout.CENTER);

        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                addRecord();
            }
        });

        clearButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                clearFields();
            }
        });
    }

    private void addRecord() {
        String customerName = customerNameField.getText().trim();
        String dogName = dogNameField.getText().trim();
        String dogBreed = dogBreedField.getText().trim();
        String service = (String) serviceComboBox.getSelectedItem();

        if (customerName.isEmpty() || dogName.isEmpty() || dogBreed.isEmpty()) {
            JOptionPane.showMessageDialog(this, "All fields are required!", "Error", JOptionPane.ERROR_MESSAGE);
            return;
        }

        tableModel.addRow(new Object[]{customerName, dogName, dogBreed, service});
        clearFields();
    }

    private void clearFields() {
        customerNameField.setText("");
        dogNameField.setText("");
        dogBreedField.setText("");
        serviceComboBox.setSelectedIndex(0);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            PetAdoptionCenterGUI gui = new PetAdoptionCenterGUI();
            gui.setVisible(true);
        });
    }
}

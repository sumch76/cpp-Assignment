import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class RadioButtonsDemo implements ActionListener {
    JFrame frame;
    JLabel lblSelection;
    JRadioButton rbOption1;
    JRadioButton rbOption2;
    JRadioButton rbOption3;
    JButton btnSubmit;

    RadioButtonsDemo() {
        frame = new JFrame("Radio Buttons Demo");
        lblSelection = new JLabel("Selected Option: ");
        rbOption1 = new JRadioButton("Option 1");
        rbOption2 = new JRadioButton("Option 2");
        rbOption3 = new JRadioButton("Option 3");

        ButtonGroup buttonGroup = new ButtonGroup();
        buttonGroup.add(rbOption1);
        buttonGroup.add(rbOption2);
        buttonGroup.add(rbOption3);
        btnSubmit = new JButton("Submit");
        btnSubmit.addActionListener(this);

        frame.add(rbOption1);
        frame.add(rbOption2);
        frame.add(rbOption3);
        frame.add(btnSubmit);

        frame.add(lblSelection, BorderLayout.NORTH);
         frame.setLayout(new FlowLayout());
        // frame.add(panel, BorderLayout.CENTER);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
       
        frame.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        String selectedOption = "";

        if (rbOption1.isSelected()) {
            selectedOption = rbOption1.getText();
        } else if (rbOption2.isSelected()) {
            selectedOption = rbOption2.getText();
        } else if (rbOption3.isSelected()) {
            selectedOption = rbOption3.getText();
        }

        lblSelection.setText("Selected Option: " + selectedOption);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new RadioButtonsDemo();
            }
        });
    }
}

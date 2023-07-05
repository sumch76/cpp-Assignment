import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class SwingCalculator implements ActionListener {
    JFrame frame;
    JTextField txt1;
    JTextField txt2;
    JTextField txtAns;
    JLabel lbl1, lbl2, lbl3;
    JButton btnAdd;
    JButton btnSubtract;
    JButton btnMultiply;
    JButton btnDivide;
    JButton btnExit;

    SwingCalculator() {
        frame = new JFrame("Calculator");
        txt1 = new JTextField(20);
        txt2 = new JTextField(20);
        txtAns = new JTextField(20);

        lbl1 = new JLabel("Number 1");
        lbl2 = new JLabel("Number 2");
        lbl3 = new JLabel("Answer");

        btnAdd = new JButton("Add");
        btnSubtract = new JButton("Subtract");
        btnMultiply = new JButton("Multiply");
        btnDivide = new JButton("Divide");
        btnExit = new JButton("Exit");

        frame.setLayout(new FlowLayout());
        frame.add(lbl1);
        frame.add(txt1);
        frame.add(lbl2);
        frame.add(txt2);
        frame.add(lbl3);
        frame.add(txtAns);
        frame.add(btnAdd);
        frame.add(btnSubtract);
        frame.add(btnMultiply);
        frame.add(btnDivide);
        frame.add(btnExit);

        btnAdd.addActionListener(this);
        btnSubtract.addActionListener(this);
        btnMultiply.addActionListener(this);
        btnDivide.addActionListener(this);
        btnExit.addActionListener(this);

        frame.setSize(300,400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        int num1 = Integer.parseInt(txt1.getText());
        int num2 = Integer.parseInt(txt2.getText());
        int result = 0;
        if (e.getSource() == btnAdd) {
            result = num1 + num2;
        } else if (e.getSource() == btnSubtract) { 
            result = num1 - num2;
        } else if (e.getSource() == btnMultiply) {
            result = num1 * num2;
        } else if (e.getSource() == btnDivide) {
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                JOptionPane.showMessageDialog(frame, "Cannot divide by zero!", "Error", JOptionPane.ERROR_MESSAGE);
            }
        } else if (e.getSource() == btnExit) {
            System.exit(0);
        }

        txtAns.setText(String.valueOf(result));
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new SwingCalculator();
            }
        });
    }
}

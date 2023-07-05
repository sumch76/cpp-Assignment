import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class LoginForm implements ActionListener {
    JFrame frame;
    JTextField usernameField;
    JPasswordField passwordField;
    JLabel lblUsername;
    JLabel lblPassword;
    JButton loginButton;

    public LoginForm() {
          frame = new JFrame("Login Form");
          usernameField = new JTextField(20);
        passwordField = new JPasswordField(20);

        lblUsername = new JLabel("Username:");
        lblPassword = new JLabel("Password:");
         loginButton = new JButton("Login");
         
        frame.add(lblUsername);
        frame.add(usernameField);
        frame.add(lblPassword);
        frame.add(passwordField);
        // frame.add(new JLabel()); // Placeholder for empty cell
        frame.add(loginButton);
      
        frame.setSize(300, 200);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       frame.setLayout(new FlowLayout());
       
        
        frame.setVisible(true);
        loginButton.addActionListener(this);

    }

    public void actionPerformed(ActionEvent e) {
        String username = usernameField.getText();
        String password = new String(passwordField.getPassword());

        if (username.equals("admin") && password.equals("password")) {
            JOptionPane.showMessageDialog(frame, "Login Successful!", "Success", JOptionPane.INFORMATION_MESSAGE);
        } else {
            JOptionPane.showMessageDialog(frame, "Invalid username or password", "Error", JOptionPane.ERROR_MESSAGE);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(()->new LoginForm());
    }
}

import javax.swing.JOptionPane;

public class Login {
     public static void main(String[] args) {
	String username = JOptionPane.showInputDialog(null, "Enter you name?");
	int password=Integer.parseInt(JOptionPane.showInputDialog(null,"enter the password"));
<<<<<<< HEAD
	      if(username.equals("Abc") && password==123)
		JOptionPane.showMessageDialog(null, "Welcome, " + username, "Welcome Message", JOptionPane.PLAIN_MESSAGE);
	      else if(username.equals("ram") && password==000)
=======
	      if(username=="Abc" && password==123)
		JOptionPane.showMessageDialog(null, "Welcome, " + username, "Welcome Message", JOptionPane.PLAIN_MESSAGE);
	      else if(username=="ram" && password==000)
>>>>>>> 84d6718eef5b164a6b91859716038be907195cd4
	        JOptionPane.showMessageDialog(null, "Welcome, " + username, "Welcome Message", JOptionPane.PLAIN_MESSAGE);
	      else                                               
JOptionPane.showMessageDialog(null, "your username or password is wrong" , "error massage", JOptionPane.PLAIN_MESSAGE);
	}
}



//this program is not working for if and else if condition it gives the last statement your username or password is wrong 

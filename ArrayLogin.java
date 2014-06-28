import javax.swing.JOptionPane;
import java.util.ArrayList;

public class ArrayLogin {
     public static void main(String[] args) {
	ArrayList list = new ArrayList();
	   String u = JOptionPane.showInputDialog(null, "register your name?");
	   int p=Integer.parseInt(JOptionPane.showInputDialog(null,"register your password"));
	      list.add(u);
	      list.add(p);
	           System.out.println(list);   
                 String username = JOptionPane.showInputDialog(null, "Enter you name?");
	         int password=Integer.parseInt(JOptionPane.showInputDialog(null,"enter the password"));
              if(username.equals(u) && password==(p))
	      JOptionPane.showMessageDialog(null, "Welcome, " + username, "Welcome Message", JOptionPane.PLAIN_MESSAGE);
	      else if(username.equals("xyz") && password==(100))
	      JOptionPane.showMessageDialog(null, "Welcome, " + username, "Welcome Message", JOptionPane.PLAIN_MESSAGE);
	      else                                               
              JOptionPane.showMessageDialog(null, "your username or password is wrong" , "error massage", JOptionPane.PLAIN_MESSAGE);
	}
}





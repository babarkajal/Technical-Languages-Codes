//bB
/*
 * take username and password and check whether they are matched or not
 */

import java.util.Scanner;
class Login {
	private String password = "13579", username="kajal";
	String enteredUser, enteredPass;

	void getDetails() {
		Scanner sc = new Scanner(System.in);
		System.out.print("\t\tEnter Username:  ");
		enteredUser = sc.next();
		System.out.print("\t\tEnter password:  ");
		enteredPass = sc.next();
	}
	boolean userValid() {
		if(username.equals(enteredUser) && password.equals(enteredPass)) 
			return true;
		return false;
	}


}

class Program {

	public static void main(String args[]) {
		Login newUser = new Login();
		newUser.getDetails();
		if(newUser.userValid()) {
			System.out.println("\n\t\tLogin Successfully done!!");
		}
		else
			System.out.println("\n\t\tLogin failed!!");

	}

}

/*
 * kajal@KAJAL:~/Desktop/CLASS/Java/DailyFlash/Nov9$ javac p4.java
kajal@KAJAL:~/Desktop/CLASS/Java/DailyFlash/Nov9$ java Program
		Enter Username:  kajal
		Enter password:  13579

		Login Successfully done!!
kajal@KAJAL:~/Desktop/CLASS/Java/DailyFlash/Nov9$ java Program
		Enter Username:  kajal
		Enter password:  srtyu

		Login failed!!

*/

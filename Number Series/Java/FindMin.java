
import java.util.*;

class Program {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int num1, num2, num3;
		System.out.print("Enter three numbers: ");
		num1 = sc.nextInt();
		num2 = sc.nextInt();
		num3 = sc.nextInt();

		if(num1 < num2) {
			if(num1 < num3)
				System.out.print(num1);
			else	
				System.out.print(num3);
		}
		else {
			if(num2 < num3)
				System.out.print(num2);
			else	
				System.out.print(num3);

		}
		System.out.println(" is a minimum among " + num1 + " " + num2 + " and "+ num3);
	}
}

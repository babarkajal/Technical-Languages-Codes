/*Program 3: Write a Program to Convert enter distance in feet to centimetres.
Input: Distance in Feet: 6ft
Output: Equivalent distance for 6ft in cm is 180cm.
*/

import java.util.Scanner;
class Program {
	public static void main(String[] args) {
		int feet;
		Scanner in = new Scanner(System.in);
		System.out.print("Enter distace in feet: ");

		feet = in.nextInt();

		System.out.println("Equivalent distance for " + feet + " in cm " + feet*30 + " cm");

	}

}

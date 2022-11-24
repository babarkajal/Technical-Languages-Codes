/*
 * Program 3: Write a Program to that accepts 10 integers from user and breaks
the loop of accepting numbers if user enters a negative number.
{Note: Use Break Statement}
Input: 1 2 3 4 -6
Output: Negative Number Entered, Exiting The Loop!
*
*/

import java.util.Scanner;

class Program {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int num;

		//accpet 10 integers from user
		System.out.println("Enter 10 numbers: ");
		for(int i=1; i<=10; i++) {
			num = input.nextInt();
			//break the loop when negative value encountered 
			if(num < 0)
				break;
		}
	}	

}

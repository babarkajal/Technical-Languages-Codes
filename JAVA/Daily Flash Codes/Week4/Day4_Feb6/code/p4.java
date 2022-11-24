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
		int row;
		int ch;
		do {
			System.out.print("Enter rows: ");
			row = input.nextInt();

			if(row < 0) 
				System.out.println("Enter non-negative value only\n");
		}while(row < 0);

	   for (int olc=0; olc< row; olc++) {
		
		//initialise variable to the 'A'
		ch = 'A';
		for (int ilc =0 ; ilc<row;ilc++) {
			if(olc+ilc >= row-1)
				System.out.print((char)ch++ + "  ");
			else
				System.out.print("   ");
		}
		System.out.println();
	   }

		
	}
}

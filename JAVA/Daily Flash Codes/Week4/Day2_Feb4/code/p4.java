/*Program 4: Write a Program to Print following Pattern.
7 14 21 28
35 42 49
56 63
70
*/

import java.util.Scanner;

class Program {
	public static void main(String[] args) {
		int row;
		Scanner in = new Scanner(System.in);
		System.out.print("Enter rows: ");
		row = in.nextInt();
		int var =1;
		for(int olc=0; olc< row; olc++) {
		       
			for(int ilc=0; olc+ilc<row; ilc++) {
				System.out.print(7*var++ + "  ");	
			}
			System.out.println();
		}	
	}

}

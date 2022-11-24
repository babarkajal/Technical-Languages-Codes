//fibonacci series

import java.util.Scanner;

class Program {
	
	public static void main(String[] args)  {
		Scanner in = new Scanner(System.in);
		int row;
		System.out.print("Enter row: ");
		row = in.nextInt();
		char ch;	
		
		for (int olc=0; olc< row; olc++) {

			//increment char by two
			ch = (char)('a' + 2*olc);
			for (int ilc=0 ; ilc+olc < row; ilc++) {
				System.out.print((char)ch + "  ");
				//inc ch to print next character
				ch++;
			}
				
			System.out.println();
		}
	}


}

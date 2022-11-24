
/*
 * Program 4: Write a Program to Print following Pattern
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/

import java.io.*;

class Program {
	public static void main(String args[]) throws IOException {
		int c;
		System.out.println("Enter num of rows: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in) );
		c = Integer.parseInt(br.readLine() );		
		
		for(int olc = 0; olc < c; olc++ ) {
			for(int ilc = 1; ilc <= c; ilc++ ) {
				System.out.print(ilc +" ");
			}
			System.out.println();
		}

			
	}
}

/*
 *
 Program 4: Write a Program to Print following Pattern
2 4 6 8
2 4 6 8
2 4 6 8
2 4 6 8
*/

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int row;
		System.out.println("Enter rows: ");
		row = Integer.parseInt(in.readLine());
		
		int num;
		for(int olc=0; olc< row ;olc++) {
			num = 2;		//again initilize to 2
			for(int ilc=0; ilc< row ;ilc++) {
				System.out.print(num+" ");
				num +=2;
			}
			System.out.println();
		}
		
	}


}

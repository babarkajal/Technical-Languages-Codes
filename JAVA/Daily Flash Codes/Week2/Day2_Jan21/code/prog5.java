/*
 * Program 5 : Write a Program to print following Pattern.
Output :
0
0 0 
0 0 0
0 0 0 0
*/

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		System.out.println("Enter row: ");
		int row = Integer.parseInt(in.readLine());		//take num of rows
		
		for(int olc=0; olc<row; olc++ )	{
			for(int ilc=0; ilc<=olc; ilc++ )
				System.out.print(" 0 ");
			System.out.println();
		}		
			
	}


}

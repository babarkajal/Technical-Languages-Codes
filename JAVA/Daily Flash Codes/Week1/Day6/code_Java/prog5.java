

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		System.out.println("Enter row: ");
		int row = Integer.parseInt(in.readLine());

		for(int olc = 0 ;olc < row; olc++) {
			for(int ilc = 0; ilc < row ; ilc++)
				System.out.print(" 0 ");
			System.out.println();
		}


	}


}



import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int row;
		System.out.println("Enter row: ");
		row = Integer.parseInt(in.readLine());
		
		for(int olc=0; olc<row; olc++) {
			for(int ilc=0; ilc<=olc; ilc++) {
				if(olc%2==0)
					System.out.print(" 0 ");
				else
					System.out.print(" 1 ");
			}
			System.out.println();
		}

	

	}


}

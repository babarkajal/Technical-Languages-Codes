
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
 		System.out.print("Enter row num: ");
		int row = Integer.parseInt(in.readLine());
		int var =1;

		for(int olc = 0; olc<row; olc++) {
			for(int ilc = 0; ilc<= olc; ilc++) 
				System.out.print(var++ + " ");		

			System.out.println();
		}
	}
}

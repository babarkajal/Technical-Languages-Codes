/*
*
Program 5: Write a Program to print following Pattern.
Output:
0 0 0 0
1 1 1 1
0 0 0 0
1 1 1 1
*/
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		System.out.println("Enter row: ");
		int row = Integer.parseInt(in.readLine());

		for(int i = 0 ; i< row; i++) {
			for(int j = 0 ; j < row; j++) {
				if(i%2==0)
					System.out.print(" 0 ");
				else
					System.out.print(" 1 ");
			}
			System.out.println();
		}

	}


}

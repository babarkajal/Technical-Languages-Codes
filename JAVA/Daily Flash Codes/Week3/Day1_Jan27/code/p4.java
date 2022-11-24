/*
 * Program 4: Write a Program to Print following Pattern.
1
4 9 
16 25 36
49 64 81 100
*/
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int num;
		System.out.println("Enter rows: ");
		num = 	Integer.parseInt(in.readLine());
		int var = 1;
		for(int i=0; i<num ;i++) {	
			for(int j=0; j<=i; j++) {
				System.out.print(var*var+ "  ");
				var++;
	 		}
			System.out.println();
			}
	}


}

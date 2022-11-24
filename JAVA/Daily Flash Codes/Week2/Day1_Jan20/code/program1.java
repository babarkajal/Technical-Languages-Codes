/*
 * Program 1: Write a program that accepts an integer from user and print it.
Input: 11
Output: 11
*/
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		System.out.println("Enter num: ");
		int i = Integer.parseInt(in.readLine());

		System.out.println("Num: "+i);


	}


}

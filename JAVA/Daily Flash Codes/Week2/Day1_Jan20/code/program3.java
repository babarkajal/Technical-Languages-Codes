/*
 * Program 3 : Write a Program that accepts a n inte ger from user and prints
whether that number is odd or even .
Input: 2
Output: 2 is an Even Number
*
*/
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		System.out.println("Enter integer: ");
		int num = Integer.parseInt(in.readLine());
		if(num%2 == 0)
			System.out.println(num +" is an Even number");
		else
			System.out.println(num +" is an Odd number");


	}


}

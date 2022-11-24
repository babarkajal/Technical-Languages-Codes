/*
 * Program 2 : Write a Program that accepts an integer from user and print Sum of
all number up to entered number .
Input: 10
Output: The s um number up to 10 : 55
*
*/
import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		System.out.println("Enter integer: ");
		int num = Integer.parseInt(in.readLine());
		int sum = 0;

		for(int i = 1; i<=num; i++)
			sum += i;

		System.out.println("Addition of "+ num +" number : "+ sum);
		
	}
}

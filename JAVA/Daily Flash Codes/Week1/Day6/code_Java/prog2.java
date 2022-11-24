/*
 *
 Program 2 : Write a Program to print Sum of First 10 Natural Numbers.
Output: The s um of First 10 Natural Numbers : 55
*/

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		int sum = 0;
	
		for(int i=1 ;i <= 10 ;i++)
			sum += i;

		System.out.println("Sum of first 10 natural num: "+ sum);

	}
}

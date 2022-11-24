/*
Program 2: Write a Program that accepts Two integers from user and prints
minimum number from them.
Input: 56 99
Output: The Minimum number amongst 56 & 99 is 56
*/


import java.io.*;
class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int num1,num2;
		System.out.println("Enter range to print odd num: ");
		System.out.println("Enter num1: ");
		num1 = 	Integer.parseInt(in.readLine());

		System.out.println("Enter num2: ");
		num2 = 	Integer.parseInt(in.readLine());


		if(num1 < num2)
		       	System.out.print(num1);
		else
			System.out.print(num2);
		System.out.println(" is minimum among "+ num1 + " and "+ num2);

	}


}

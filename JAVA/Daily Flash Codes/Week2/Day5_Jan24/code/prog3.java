/*
 * Program 3: Write a Program to print Cubes and Squares of all Odd numbers
ranges between given input number.
Input: 10
Output:
Cube of 1 : 1 and Square of 1 :1
Cube of 3 : 27 and Square of 3 :9
.
.
Cube of 9 : 729 and Square of 9 : 81*/


import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int num;
		System.out.println("Enter num: ");
		num = Integer.parseInt(in.readLine());
		
		int count = 0;
		for(int i=1; i<=num; i++) {
			System.out.println("cube of" + i + ": " + (i*i*i) + "square of " + i +": "+ (i*i)) ;
			count++;
		}
		System.out.println();	
	}

}

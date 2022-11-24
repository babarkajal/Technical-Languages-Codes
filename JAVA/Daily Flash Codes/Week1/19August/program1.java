/*
 
Program 1: Write a Program to check whether the Character is Uppercase or
Lowercase Character.
Input: v
Output: letter v is in lowercase
 */

import java.io.*;

class Program {
	public static void main(String args[]) throws IOException {
		char c;
		System.out.println("Enter Character: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in) );
		c = (char)br.read();		//to read only one character


		if( (c >=97 && c<=122) || (c >=65 && c <=90) ) {
	
			if(c >=97 && c<=122)
				System.out.println("Letter "+ c + " is in Lower case");
			else
				System.out.println("Letter "+ c + " is in upper case");
		}
		else
			System.out.println("Letter "+ c + " is not an alphabet");
	}
}

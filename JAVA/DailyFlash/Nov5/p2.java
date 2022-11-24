//bB
/*
 * Write program to take string from user and print it in reverse order using char array
 */

import java.util.Scanner;
class Program {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter String: ");
		String s = sc.next();

		//convert the string into char array 
		char arr[] = s.toCharArray();
		int length = 0;
		for(int i = 0; i<arr.length; i++) {
			length++;
		}
		System.out.println("The length of the given string "+ length);

	}
}

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
		
		for(int i = arr.length-1; i>=0; i--) {
			System.out.print(arr[i]+"   ");
		}
		System.out.println();

	}
}

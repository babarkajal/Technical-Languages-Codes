/*
 * Program 2: Write a Program that accepts Two integers from user and prints the
series of factorial of all numbers between those two inputs.
Input: 1 to 5
Output:
Factorial of 1 = 1
.
.
Factorial of 5 = 120
*/

import java.util.*;

class Program {
	public static void main(String args[]) {
			
		Scanner sc = new Scanner(System.in);
		int num1,num2,fact, temp;
		
		System.out.print("Enter num1: ");
		num1 = sc.nextInt();
		
		System.out.print("Enter num2: ");
		num2 = sc.nextInt();
		System.out.println("Factorial of numbers from "+num1 + " to "+ num2);
		for(int i = num1 ; i<=num2; i++) {
				fact = 1;

				for(int j=1; j<=i; j++) {
					fact *= j;
				}
		
				System.out.println("Factorial of "+ i + ": "+ fact);
		}
	}
}

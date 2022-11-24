/*Program 1: Write a Program to print Fibonacci Series of N elements. Where n is
a number entered by user.
Output: 0 1 1 2 3 5 8 13 21 34
*/

import java.util.Scanner;

class Program {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int num1=0,num2=1,sum =0;

		System.out.println("Enter limit for the fibonacci series: ");
		int range = input.nextInt();

		System.out.print(num1 + " "+num2 + " ");

		for(int lc=2; lc < range; lc++) {

			sum = num1+num2;
			System.out.print(sum+ " ");
			num1 = num2;
			num2 = sum;
		}
		System.out.println();
	}
}

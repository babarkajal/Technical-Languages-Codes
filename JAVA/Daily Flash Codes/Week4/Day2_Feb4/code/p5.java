/*Program 5: Write a Program that computes sum of all possible divisors of an
entered number.
Input: 25
Output:  The of all possible divisors of 24 is : 39
*/

import java.util.Scanner;

class Program {
	public static void main(String[] args) {
		int num, sum=0;
		Scanner in = new Scanner(System.in);
		System.out.print("Enter Number: ");

		num = in.nextInt();

		for(int div=1; div<=num/2 ; div++) {
			if(num % div == 0) {
				sum +=div;
			}
		}
		System.out.println("The sum of all possible divisors of " + num + ": "+ sum);

	}

}

/*
Program 1: Write a Program which detects whether the entered number is
perfect or not .
{Note: If sum of perfect divisors of number is equal to the entered number
than it is considered as perfect one.}
Input : 6
Output : 6 is a Perfect number.
*/

import java.util.*;

class Program {

	public static void main(String args[] ) {
		int num,temp,sumOfDivisor = 0;
		System.out.println("Enter num: ");
		Scanner sc = new Scanner(System.in);

		num = sc.nextInt();
		
		for(int i=1; i<=num/2; i++) {
			if(num%2 == 0) 
				sumOfDivisor += i;
		}
		
		if(num == sumOfDivisor)
			System.out.println(num + " is perfect number ");
	
		else
			System.out.println(num + " is not perfect number ");


	}	

}

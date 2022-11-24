/*
Program 1: Write a Program to check whether the entered number is
Abundant number or not.
{Note: a number can be termed as abundant if the sum of all of its perfect
divisors is greater than that number itself, e.g. 12: 1+2+3+4+6 = 16 > 12 so 12
is an abundant number.}
Input: 18
Output: 18 is abundant number since 1 + 2 + 3 + 6 + 9 = 21, which is greater
than 18.
*/

import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);       
        	int num;
		System.out.println("Enter num: ");
		num = input.nextInt();
		
		int sumOfDiv = 0;
		for(int div=1; div<=num/2; div++){
			if(num%div==0) {
				sumOfDiv +=div;
			}
		}

		if(sumOfDiv > num) 
			System.out.println(num+" is abundant number\n");
		else 
			System.out.println(num+" is not abundant number\n");
	}
}


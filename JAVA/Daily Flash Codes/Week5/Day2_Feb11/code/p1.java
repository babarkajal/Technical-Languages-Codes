/*Program 1: Write a Program to check whether the entered number by user is
Deficient or not.
{Note: A Number is termed as deficient number, if sum of all of its perfect
divisors is less than the number itself. E.g. 15 is deficient number, since 1 + 3 +
5 = 9 < 15.}
Input: 45
Output: 45 is Deficient Number.
*/


import java.util.Scanner;

class Program {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num;
		System.out.println("Enter number: ");
	        num  = sc.nextInt();
		
		int sumOfDiv = 0;
		for(int div=1; div<=num/2; div++) {
			if(num%div==0)
				sumOfDiv +=div;	
		}
		if(sumOfDiv < num) 
			System.out.println(num+" is deficient number");
		else
			System.out.println(num+" is not deficient number");
	}

}


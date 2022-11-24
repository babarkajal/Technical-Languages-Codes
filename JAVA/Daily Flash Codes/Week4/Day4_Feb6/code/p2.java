/*
 * Program 2: Write a Program to Convert entered Decimal Number to Binary Number
Input: Binary Number: 35
Output: Octal Number: 100011
*
*/

import java.util.Scanner;

class Program {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		int decimal;
		int rem, len=0;

		//take decimal number from user
		System.out.print("Enter decimal number: ");
		decimal = input.nextInt();

		//take array to store binary number
		int binary[] = new int[20];

		
		if(decimal == 0) {
		}
		else{
			//divide number by 2 
			while(decimal != 1) {
				rem = decimal%2;
				binary[len++] = rem;
				decimal /= 2;
			}
		}
		
		
		//insert last quoient at the end of array
		binary[len]=decimal;

		//print reverse number
		System.out.print("Binary number: ");
		
		for(int lc=len; lc>=0; lc--) 
			System.out.print(binary[lc]);

		System.out.println();
	}	


}

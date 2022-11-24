/*
 * Program 2: Write a Program to Convert entered Decimal Number to Octal
Number
Input: Decimal Number: 15
Output: Octal Number: 17
*/


import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);       
		int decimal;
		System.out.println("Enter decimal: ");
		decimal = input.nextInt();
		
		System.out.println("Octal num: " + Integer.toOctalString(decimal));		
	
	}
}


/*Program 5: Write a Program that accepts 5 integer values from user and
compares two consecutive inputs and if the second of them is lesser that the
previous one then the code exits out of loop and prints the unexpected input.
{Note: Use Break Statement}
Input: 1 3 5 4
Output: Loop is exited with input 4.
*/

import java.util.Scanner;

class Program {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int val,prev, i = 1;

		System.out.println("Enter 5 integers: ");

		//first take one input to store it in prev variable
		val = input.nextInt();
		prev = val;

		for(i=2; i<=5; i++) {

			val = input.nextInt();

			//when two input get from user compare it with prev one if is it less then break the loop
			if( prev > val) {
				System.out.println("Inexpected input. Loop is exited with input "+ i);
				break;
			}

			//store prev value of val variable
			prev = val;
		}
		
	}
}

/*
 * Program 5: Write a Program that takes a number as input from user and prints
the counts the occurrence of even digits from it
Input: 123458
Output: The number 123458 has 3 Even digits.
*
*/

import java.util.Scanner;

class Program {
	public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);
			int num;
			System.out.print("Enter num: ");
			num = sc.nextInt();

			int mod,count=0,oriNo = num;
			while(num!=0) {
				mod = num%2;
				if(mod%2==0)
					count++;
				num /=10;

			}
			System.out.println(oriNo+" has "+ count + " even digits");

	}

}


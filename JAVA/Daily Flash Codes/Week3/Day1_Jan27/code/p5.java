/*Program 5: Write a Program that accepts Three integers from user and prints
maximum number from them.
Input: 56 7 99
Output: The Maximum number amongst 56 7 & 99 is 99
*/

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int num1,num2,num3;
		
		System.out.println("Enter num1: ");
		num1 = 	Integer.parseInt(in.readLine());

		System.out.println("Enter num2: ");
		num2 = 	Integer.parseInt(in.readLine());

		System.out.println("Enter num3: ");
		num3 = 	Integer.parseInt(in.readLine());

		if(num1 > num2) {
			if(num1 > num3 ) 
		       		System.out.print(num1);
			else
		       		System.out.print(num3);
		}
		else  {
			if(num2 > num3) 
				System.out.print(num2);
			else
		       		System.out.print(num3);
		}
		System.out.println(" is maximun among "+ num1 + ", "+ num2 + " & "+ num3);

	}
}

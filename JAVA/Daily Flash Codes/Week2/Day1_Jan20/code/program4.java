/*
*
* Program 4 : Write a Progr am to accept 10 integers from user and prin t s the
sum & average of entered numbers .
Input: 1 2 3 4 5 6 7 8 9 10
Output:
Sum of 10 entered Number is: 55
Average of 10 entered number is: 5.55
*/

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int num , sum = 0;
		
		System.out.println("Enter 10 integers: ");
		for(int i=1; i<=10; i++) {
			num = Integer.parseInt(in.readLine());
			sum +=num;
		}
		int avg = sum/10;
		int fraction = sum%10;
		System.out.println(" Sum of 10 numbers: "+sum);
		System.out.println("Average of 10 numbers: "+avg + "." + fraction);

	}


}

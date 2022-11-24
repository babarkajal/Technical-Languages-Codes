/*Program 2: Write a Program to Convert entered Binary Number to Decimal
Number
Input: Binary Number: 1011
Output: Decimal Number: 11
*/

import java.util.Scanner;
class Program {
	static int power(int base , int exp) {
		int pow = 1;
		for(int lc=1; lc<=exp; lc++)
			pow = pow*base;
			return pow;
	}

	public static void main(String[] args) {
		int binaryNo;
		int decimal = 0, mod;
		int var=0;
		Scanner in = new Scanner(System.in);
		System.out.print("Enter Binary Number: ");

		binaryNo = in.nextInt();
		while(binaryNo != 0) {
			mod = binaryNo % 10;

			//multiply by power of 2
			decimal += mod * Program.power(2,var);
			binaryNo /=10;
			var++;

		}
		System.out.println("Decimal = "+ decimal);

	}


}

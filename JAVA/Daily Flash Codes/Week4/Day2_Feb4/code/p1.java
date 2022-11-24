/*Program 1: Write a Program to that prints series of Prime number ranging
between 1 to 100.
Output: 1 2 3 5 . . .
*/

import java.util.Scanner;
class Program {
	public static void main(String[] args) {
		int range, count;
		Scanner in = new Scanner(System.in);
		System.out.print("Enter limit for series: ");

		range = in.nextInt();

		for(int lc=1; lc<=range; lc++) {
			count = 1;
			for(int div=1; div<=lc/2; div++) {
				if(lc % div == 0)
					count ++;	
			}
			if(count == 2) {
				System.out.print(lc+ "  ");
			}

		}
		System.out.println();

	}

}

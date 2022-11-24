/*Program 3: Write a Program to that accepts an integer value from user and
prints all even numbers from that number to 0 using while loop.
Input: 65
Output: 64 62 60 58 56 54 52 . . . .. 0
*/
import java.util.Scanner;

class Program {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num;
		System.out.print("Enter number: ");
		num = sc.nextInt();
		int i=num;
		while(i-- >= 0) {
			if(i%2==0)
				System.out.print(i+" " );
		}
		System.out.println();
	}

}


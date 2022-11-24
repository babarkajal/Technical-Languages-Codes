/*Program 3: Write a Program to that skips the occurrence of numbers that are
divisible by 2 using continue statement. Print this sequence up to 100.
Output: 1 3 5 7 9 11 13*/

class Program {
	public static void main(String[] args)  {
		for(int lc =1; lc<=100; lc++) {
			if(lc%2 == 0)
				continue;
			else
				System.out.print(lc + "  ");
		}	

		System.out.println();
	}
}

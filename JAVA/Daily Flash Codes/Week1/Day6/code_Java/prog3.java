/*
 * Program 3 : Write a Program to print First 50 Odd Numbers .
Output: 1 3 5 . . . 99
*
*/


class Program {
	public static void main(String[] args)  {
		int num =1;

		for(int i=1; i<= 50; i++){
			System.out.print(num+ "  ");
			num +=2;
		}
		System.out.println();
	}
}

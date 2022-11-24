/*
*
Program 4 : Write a Program to print First 50 Even Numbers
Output: 2 4 6 . . . 100
*/


class Program {
	public static void main(String[] args)  {
		int num =2;

		for(int i=1; i<= 50; i++){
			System.out.print(num+ "  ");
			num +=2;
		}
		System.out.println();
	}
}

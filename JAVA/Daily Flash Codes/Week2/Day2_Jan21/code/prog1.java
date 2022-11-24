/*
Program 1: Write a program to print squares of first 10 numbers.
Output:
Square of 1 : 1
Square of 2: 4
Square of 3 : 9
.
.
.
Square of 1 0 : 100   
*/


class Program {
	public static void main(String[] args){
		for(int i=1; i<=10; i++)
			System.out.println("Square of" + i + ": "+ (i*i) );		
	}
}

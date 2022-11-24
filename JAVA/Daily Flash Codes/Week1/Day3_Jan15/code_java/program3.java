/*
Program 3: Write a Program to take number of month and print the number of
days in that month.
Input: 4
Output: April is a 30 days’ month.
 */


import java.io.*;

class Program {
	public static void main(String args[]) throws IOException {
		
		int  i;

	do {
		System.out.println("Enter Month num: ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in) );
		i = Integer.parseInt(br.readLine());	//to read integerr

		if(i < 1 || i > 12)
			System.out.println("Wrong input !! Try again ");
	}while(i <1 || i > 12);

	switch(i) {
		case 1:
			System.out.println("January is a 31 days' month");
		        break;	
		case 2:
			System.out.println("February is a 28/29 days' month" );
		        break;	

		case 3:
			System.out.println("March is a 31 days' month");
		        break;	
		case 4:
			System.out.println("April is a 30 days' month");
		        break;	
		case 5:
			System.out.println("may is a 31 days' month");
		        break;	
		case 6:
			System.out.println("June is a 30 days' month");
		        break;	
		case 7:
			System.out.println("July is a 31 days' month");
		        break;	
		case 8:
			System.out.println("August is a 31 days' month");
		        break;	
		case 9:
			System.out.println("September is a 30 days' month");
		        break;	
		case 10:
			System.out.println("October is a 31 days' month");
		        break;	
		case 11:
			System.out.println("November is a 30 days' month");
		        break;	
		case 12:
			System.out.println("December is a 31 days' month");
		        break;	
				
	}
	}
}

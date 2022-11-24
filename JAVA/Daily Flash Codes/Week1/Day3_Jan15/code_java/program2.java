/*
 Program 2: Write a Program to take a integer raging between 0 to 6 and print
corresponding weekday
Input: 2
Output: Wednesday.
 */


import java.io.*;

class Program {
	public static void main(String args[]) throws IOException {
		
		int  i;

	do {
		System.out.println("Enter Integer value(0-6): ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in) );
		i = Integer.parseInt(br.readLine());	//to read integerr

		if(i < 0 || i > 6)
			System.out.println("Wrong input !! Try again ");
	}while(i <0 || i > 6);

	switch(i) {
		case 0:
			System.out.println("Monday");
		        break;	
		case 1:
			System.out.println("Tuesday");
		        break;	

		case 2:
			System.out.println("Wednesday");
		        break;	
		case 3:
			System.out.println("Thursday");
		        break;	
		case 4:
			System.out.println("Friday");
		        break;	
		case 5:
			System.out.println("saturday");
		        break;	
		case 6:
			System.out.println("Sunday");
		        break;	
				
	}



	}
}

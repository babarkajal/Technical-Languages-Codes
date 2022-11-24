

import java.io.*;
class Program {

	public static void main(String args[]) throws IOException{
		
		BufferedReader br= new BufferedReader (new InputStreamReader (System.in));
		int year;
		
		System.out.println("Enter year: ");
		year = Integer.parseInt(br.readLine());

		if(year % 4==0)
	       		System.out.println("Leap year!!!");

		else if(year%400==0 && year %100 == 0) 	
	       		System.out.println("Leap year!!!");
		else
	       		System.out.println("Not Leap year!!!");
	}

}	

/*
 *
 Program 2: Write a program that takes electricity unit charges as input and
calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit.
*
*/


import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		
		int unit;
		System.out.println("Enter Electricity units: ");
		unit = Integer.parseInt(in.readLine());		//take unit
		
		//if unit < 0
		if( unit < 0) {
			System.out.println("Unit cannot be negative digit\n");
			System.exit(0);
		}

		if(unit <= 50)
			System.out.println("Electricity bill for unit"+ unit +" : " +unit*0.50);
		else if( unit > 50 && unit <= 150)
			System.out.println("Electricity bill for unit"+ unit +" : " +unit*0.75);
		else if(unit > 150 && unit <= 250 )
			System.out.println("Electricity bill for unit"+ unit +" : " +unit*1.20);
		else if(unit > 250)
			System.out.println("Electricity bill for unit"+ unit +" : " +unit*1.50);

	}
}

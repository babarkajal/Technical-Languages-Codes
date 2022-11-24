

import java.io.*;
class Program {

	public static void main(String args[]) throws IOException{
		
		BufferedReader br= new BufferedReader (new InputStreamReader (System.in));
		int sum =0;
		double per;	
		int marks[] = new int[5];		//create an array

		System.out.println("Enter marks of 5 subjects(Out of 100): ");
		for(int i=0; i<5; i++) {
			marks[i] = Integer.parseInt(br.readLine());
			sum += marks[i];
		}
		per = sum / 500.00 *100;


		if(per >= 90)
			System.out.println("Percentage "+per +"Grade A");
		else if(per >=80 )
			System.out.println("Percentage :" + per +" Grade B");
		else if(per >=70 )
			System.out.println("Percentage :" + per +" Grade C");
		else if(per >=60 )
			System.out.println("Percentage :" + per +" Grade D");
		else if(per >=40 )
			System.out.println("Percentage :" + per +" Grade E");
		else
			System.out.println("Percentage :" + per +" Grade F");


	}

}	

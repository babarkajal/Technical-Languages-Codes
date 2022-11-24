

import java.io.*;
class Program {

	public static void main(String args[]) throws IOException{
	
	//create object of bufferedRead
	BufferedReader br= new BufferedReader (new InputStreamReader (System.in));
	int row;
	
	System.out.println("Enter Row  num");
	row = Integer.parseInt(br.readLine());
	
	int count = 1;
	for(int olc = 0; olc<row ;olc++) {
		for(int ilc = 0; ilc<row ;ilc++) {
			if(count < 10) 
				System.out.print((count++)+"  " );
			else
				System.out.print((count++)+" " );
		}
		System.out.println();
	}


	}
}


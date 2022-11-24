

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		
		int data;
		System.out.println("Enter input: ");
		data = Integer.parseInt(in.readLine()) ;		//read data

		System.out.println("Table of "+ data);	

		for(int num=1; num<= 10; num++) 
			System.out.print( (data*num) + "  " );
		System.out.println();	


	}


}

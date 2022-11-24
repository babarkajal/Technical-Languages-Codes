

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int num1,num2;
		System.out.println("Enter range to print odd num: ");
		System.out.println("Enter num1: ");
		num1 = 	Integer.parseInt(in.readLine());
		
		System.out.println("Enter num2: ");
		num2 = 	Integer.parseInt(in.readLine());
			
		while(num2 < num1){
			System.out.println("num1 should be greater than num1\nEnter num2: ");
			num2 = 	Integer.parseInt(in.readLine());
		}

		for(int lc=num1; lc<=num2; lc++) {
			if(lc%2!=0)
				System.out.print(lc+ "  ");
		}
		System.out.println();	
	 
	}


}

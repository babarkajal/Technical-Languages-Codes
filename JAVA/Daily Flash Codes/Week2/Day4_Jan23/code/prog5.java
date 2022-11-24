

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
 		int num, fact=1;
		System.out.print("Enter num for factorial calculation: ");
		num = Integer.parseInt(in.readLine());	
		for(int lc = 1; lc<=num; lc++) 
			fact *=lc;
		System.out.println("Factorial of "+ num + " : " + fact );
	

	}


}

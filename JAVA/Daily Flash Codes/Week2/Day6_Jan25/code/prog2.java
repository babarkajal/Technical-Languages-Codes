

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
		
		System.out.println("before swap");	
		System.out.println(num1 + "  "+ num2);
			
		int temp = num1;
		num1= num2;
		num2 = temp;
		System.out.println("After swap");
		System.out.println(num1 + "  "+ num2);
	 
	}


}

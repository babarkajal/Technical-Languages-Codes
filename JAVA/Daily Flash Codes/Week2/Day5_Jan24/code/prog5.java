

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int num;
		System.out.println("Enter integer: ");
		num = Integer.parseInt(in.readLine());
		
		for(int i =2; i<=num/2; i++) {
			if(num% i==0 ) 
				System.out.print(i + "  " );

		}
		System.out.println();
	}
}

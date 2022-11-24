

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int num;
		System.out.println("Enter num: ");
		num = 	Integer.parseInt(in.readLine());
		
		for(int i=1; i<=num ;i++) {	
			if(i%2 == 0) 
				System.out.println("Cube of " + i + ": "+ i*i*i + "  " + "Square of "+ i + ": "+ i*i);
	 	}
	}


}

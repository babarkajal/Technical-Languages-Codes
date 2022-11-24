

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		
		char ch;
		System.out.println("Enter the charcter: ");
		ch = (char)in.read();	//accpet character
		
		System.out.printf("ASCII of %c  : %d\n", ch,(int)ch );
	}


}

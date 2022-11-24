

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int num;
		System.out.println("Enter num: ");
		num = 	Integer.parseInt(in.readLine());
		int var = 65;
		for(int i=0; i<num ;i++) {	
			for(int j=0; j<=i; j++) {
				if(i%2 != 0)
					System.out.print((char)var+ "  ");
				else
					System.out.print((char)(var+32)+ "  ");
	 		}
			System.out.println();
			}
	}


}

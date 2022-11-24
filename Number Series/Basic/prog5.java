import java.io.*;
import java.lang.System.*;

class Program {
	public static void main(String args[]) {

		BufferedReader br = new BuferedReader (new InputStreamReader(System.in));

		System.out.println("Enter row ")
		int row = Integer.parseInt(br.readLine());
		
		for(int olc =0 ; olc<row ;olc++) {
				for(int ilc = 1; ilc<= olc; ilc++)	
						System.out.print(" * ");
				System.out.println();
		}

		

	}
}



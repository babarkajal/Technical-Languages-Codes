import java.io.*;

class Program {
	public static void main(String args[]) throws IOException{

		BufferedReader br = new BufferedReader (new InputStreamReader(System.in));

		System.out.println("Enter row :");
		int row = Integer.parseInt(br.readLine());
		
		for(int olc =0 ; olc<row ;olc++) {
				for(int ilc = 0; ilc<= olc; ilc++)	
						System.out.print(" * ");
				System.out.println();
		}

		

	}
}



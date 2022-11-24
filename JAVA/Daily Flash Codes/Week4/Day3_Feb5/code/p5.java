
import java.util.Scanner;

class Program {
	public static void main(String[] args)  {
		Scanner in = new Scanner(System.in);
		int row;
		System.out.print("Enter row: ");
		row = in.nextInt();
		
		for (int olc=0; olc< row; olc++) {
	
			for (int ilc=0; ilc < row ; ilc++) {

				if(ilc+olc >= row-1)
					System.out.print(ilc+1 + " ");
				else 
					System.out.print("  ");
			}
		System.out.println();
		}

	}


}

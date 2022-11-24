
import java.util.*;

class Program {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		int row , var = 1;
		System.out.println("Enter row number: ");
		row = sc.nextInt();
		for(int olc=0; olc<row; olc++)	{
			for(int ilc=0; ilc<row; ilc++){
				if(ilc <= olc) {
					System.out.print(var*var*var + " ");
					var++;
				}
				else
					continue;
			}
			System.out.println();
		}
	}
}

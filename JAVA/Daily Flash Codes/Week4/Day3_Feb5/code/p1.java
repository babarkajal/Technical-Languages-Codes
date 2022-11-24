//fibonacci series

import java.util.Scanner;

class Program {
	
	public static void main(String[] args)  {
		Scanner in = new Scanner(System.in);
		int n;
		System.out.print("Enter limit for series: ");
		n = in.nextInt();
		

		//create on array for store series
		int fArr[] = new int[n];
		fArr[0] = 0; 
		fArr[1] = 1; 
		
		for(int i=2; i < fArr.length; i++) {
			fArr[i] = fArr[i-1]+ fArr[i-2]; 
		}
		System.out.println("Fibonacci series: ");
		for(int lc=0; lc< fArr.length; lc++) {
				System.out.print(fArr[lc] + "  ");
			
		}
		System.out.println();
	}


}

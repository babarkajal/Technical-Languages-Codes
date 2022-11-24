

import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);       
        	int row;
		System.out.print("Enter rows: ");
		row = input.nextInt();
		int var;
		for(int i = 0; i<row; i++) {

			var= row-1;
			for (int j= 0; j<row; j++) {
				
				if(i+j >= row-1) {
					System.out.print( (var*var) +" ");
					var +=1;
				}
				else 
					System.out.print("  ");
			}
			System.out.println();
		}
	}
}


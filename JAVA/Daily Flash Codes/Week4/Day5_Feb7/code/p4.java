import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);    
		System.out.print("Enter rows: ");
		int row = input.nextInt();
		char ch = 'A';
		for (int olc=0; olc<row; olc++){
			for(int ilc=0; ilc<row; ilc++ ){
				if(olc+ilc >=row-1) 
					System.out.print((char) (ch+ilc) +  " ");
				else
					System.out.print("  ");
			}
			System.out.println();
		}
	
        }
}


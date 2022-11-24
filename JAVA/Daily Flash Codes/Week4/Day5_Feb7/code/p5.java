import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);    
		System.out.print("Enter rows: ");
		int row = input.nextInt();
		char ch = 'A';
		for (int olc=0; olc<row; olc++){
			for(int ilc=0; ilc<row; ilc++ ){
				if(olc==ilc) 
					System.out.print("= ");
				else
					System.out.print(ilc+1+" ");
			}
			System.out.println();
		}
	
        }
}


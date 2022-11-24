/*
      A
    B A
  C B A
D C B A

*/
import java.util.Scanner;

class Program {
	public static void main(String[] args) {
		int row;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter rows: ");
		row = sc.nextInt();
		char ch;
		for(int olc=0; olc<row; olc++) {
			ch =(char) (65 + olc);
			for(int ilc=0;ilc<row; ilc++) {
		
				if(olc+ilc >=row-1) {
					System.out.print((char)ch+" ");
					ch--;
				}
	
				else
					System.out.print("  ");
			}
			System.out.println();
		}
	}

}


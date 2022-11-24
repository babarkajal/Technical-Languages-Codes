
import java.util.*;
class Program62 {

	public static void main(String... a ){


		Scanner sc  =new Scanner(System.in);
		int row = sc.nextInt();
		
		for(int j=1;j<=row;j++){	
		
			for(int i=1;i<(j-1)*2;i++){

				System.out.print("\t");

			}
				
			for(int k=1;k<=(row*2)-(j*2-1);k++){

				System.out.print("\t*");

			}

			System.out.println("\n");


		}

	}

}

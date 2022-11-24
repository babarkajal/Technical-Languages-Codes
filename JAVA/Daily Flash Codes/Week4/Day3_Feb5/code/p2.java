
import java.util.Scanner;

class Program {
		
		//function to calculate power
		static int power(int base , int exp) {
			int pow = 1;
			for(int lc=1; lc<=exp; lc++)
				pow = pow*base;
				return pow;
		}

		public static void main(String[] args) {
				
			int binaryNo;
			int decimal = 0, mod;
			int exp=0;
			int octalArr[] = new int[20];
			Scanner in = new Scanner(System.in);
			
			//take num from user
			System.out.print("Enter Binary Number: ");
			binaryNo = in.nextInt();
				
			int temp = binaryNo;

			int count=0, octalThree  = 0;
			int len = 0;
			int arr[] = new int[20];

			while(temp != 0) {
				mod = temp % 10;
				//multiply by power of 2
				decimal += mod * power(2,exp);
				count++;
				exp++;
				if(count == 3) {
					arr[len] = decimal;
					len++;
					decimal = 0;
					count =0;
				       	exp=0;
				}
				temp /= 10;
			}

			System.out.println("Octal num: ");
			for(int i=len-1; i >=0;i--) {
				System.out.print(arr[i]);
			}
			System.out.println();
	}
}

import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);       
        	int n;
		System.out.print("Enter num: ");
		n = input.nextInt();

		while( n >= 0) {
			if(n%2 != 0)
				System.out.print(n + " ");
			n--;	
		}
		System.out.println();
	
	}
}


import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);    
		System.out.print("Enter num: ");
		int num = input.nextInt();

	    	int count = 1;
		for(int i=1; i<= num/2; i++) {
				if(num % i == 0)
					count ++;	
		}
		if(count == 2) {
				System.out.println( num + " is a prime num");
		}else{
				System.out.println( num + " is not a prime num");
		}
	
        }
}


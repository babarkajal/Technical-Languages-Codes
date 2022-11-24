import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);    
		System.out.print("Enter decimal num: ");
		int decimal = input.nextInt();
			
		//in built function for conversion of decimal to hex
		System.out.println("Heaxadecimal:  " + Integer.toHexString(decimal));			
	
        }
}


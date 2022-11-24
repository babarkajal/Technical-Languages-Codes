import java.io.*;
class Program {
	public static void main(String args[]) throws IOException{

		BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
		System.out.println("Enter two nums: ");
		int num1 = Integer.parseInt(br.readLine());
		int num2 = Integer.parseInt(br.readLine());
		
		System.out.println("Addition : "+ (num1+num2));

		if(num1 > num2)	
			System.out.println("Substraction: "+ (num1 - num2));
		else
			System.out.println("Substraction : "+ (num2 - num1));
		

	}
}



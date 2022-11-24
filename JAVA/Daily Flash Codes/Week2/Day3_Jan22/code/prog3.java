import java.io.*;

class Program {
	public static void main(String args[]) throws IOException{

		BufferedReader br = new BufferedReader (new InputStreamReader(System.in));

		System.out.println("Enter two nums: ");
		int num1 = Integer.parseInt(br.readLine());
		int num2 = Integer.parseInt(br.readLine());
		
		int cube1 = num1*num1*num1;
		int cube2 = num2*num2*num2;

		int sq1 = num1*num1;
		int sq2 = num2*num2;

		System.out.println("Addtion : "+ cube1 + " & "  +cube2  + ": " + (cube1+cube2));
		System.out.println("Substraction : "+ sq1 + " & "  +sq2  + ": " + (sq1 - sq2 ));

		

	}
}



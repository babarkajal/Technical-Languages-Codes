import java.io.*;
import java.lang.System.*;

class Program {
	public static void main(String args[]) {

		BufferedReader br = new BuferedReader (new InputStreamReader(System.in));

		int num1 = Integer.parseInt(br.readLine());
		int num2 = Integer.parseInt(br.readdLine());
		
		int cube1 = num1*num1*num1;
		int cube2 = num2*num2*num2;

		int sq1 = num1*num1;
		int sq2 = num2*num2;

		out.println("Addtion : "+ cube1 + " & "  +cube2  + ": " + cube1+cube2);
		out.println("Substraction : "+ sq1 + " & "  +sq2  + ": " + sq1 - sq2);

		

	}
}



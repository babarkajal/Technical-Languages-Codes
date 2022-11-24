import java.io.*;
import java.lang.System.*;

class Program {
	public static void main(String args[]) {

		BufferedReader br = new BuferedReader (new InputStreamReader(System.in));

		int num1 = Integer.parseInt(br.readLine());
		int num2 = Integer.parseInt(br.readdLine());
		
		out.println("Multiplication : "+ (num1 * num2));

		if(num1 > num2)	
			out.println("Division: "+ (num1 / num2));
		else
			out.println("Division : "+ (num2 / num1));
		

	}
}



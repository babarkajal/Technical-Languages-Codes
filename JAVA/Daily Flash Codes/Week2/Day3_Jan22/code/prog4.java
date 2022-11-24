

import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		
		System.out.println("Enter two Nos: ");
		int num1 = Integer.parseInt(in.readLine());		
		int num2 = Integer.parseInt(in.readLine());		

		System.out.println("Enter operation(+ , - , * , /)");
		char opcode = (char)in.read();
		switch(opcode) {
		case '+':
			System.out.println("Addition of " + num1 + "& " + num2 + ": "+ (num1+num2) );
			break;

		case '-':
			System.out.println("Substraction of " + num1 + "& " + num2 + ": "+ (num1-num2) );
			break;
		case '*':
			System.out.println("Multiplication of " + num1 + "& " + num2 + ": "+ (num1*num2) );
			break;
		case '/':
			System.out.println("Division of " + num1 + "& " + num2 + ": "+ (num1/num2) );
			break;
		default:
			System.out.println("Wrong opcode entered!!!" );
			break;

		}

	

	}


}

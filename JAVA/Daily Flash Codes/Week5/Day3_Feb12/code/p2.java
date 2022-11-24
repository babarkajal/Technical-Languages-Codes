
import java.util.Scanner;

class Functions {
  static int power(int base, int exp) {
	int power=1;
	int i=1;
	while(i<=exp)  {
		power *=base;
		i++;
	}

	return power;
  }

 //convert octal to the decimal
 static int octToDec(int octal) {

	int exp=0,mod,decimal = 0;

	while(octal!=0) {
		mod = octal%10;
		decimal = decimal + mod*power(8,exp);
		octal /=10;
		exp++;
	}
	return decimal;
 }

}//end of class

class Program {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int octal;
		System.out.print("Enter octal number: ");
		octal = sc.nextInt();

		int decimal = Functions.octToDec(octal);
		System.out.println("HexaDecimal converion of octal num "+ octal + ":"+ Integer.toHexString(decimal));

	}

}


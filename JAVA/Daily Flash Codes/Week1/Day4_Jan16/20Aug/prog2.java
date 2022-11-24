import java.io.*;

class Program {

	public static void main(String args[]) throws IOException{
		
		int priAmt,year;
		//take interest rate
		int rate;
		double simpleInterest;

		BufferedReader br= new BufferedReader (new InputStreamReader (System.in));

		//priAmt
		System.out.println("Enter Primary ammount: ");
		priAmt = Integer.parseInt(br.readLine());

		//rate
		System.out.println("Enter interest Rate: ");
		rate = Integer.parseInt(br.readLine());

		//year
		System.out.println("Enter interest Rate: ");
		year = Integer.parseInt(br.readLine());
			
		//System.out.println(priAmt + " ");
		//System.out.println(rate + " ");
		//System.out.println(year + " ");

		simpleInterest = priAmt * year * (rate / 100.0);

		System.out.println("Simple interest ="+ simpleInterest);

		
	
	
	}

}	

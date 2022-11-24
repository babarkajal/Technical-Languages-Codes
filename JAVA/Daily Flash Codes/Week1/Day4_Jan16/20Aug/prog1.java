

import java.io.*;
class Program {

	public static void main(String args[]) throws IOException{
	
	//create object of bufferedRead
	BufferedReader br= new BufferedReader (new InputStreamReader (System.in));
	int s1,s2,hypo;

	System.out.println("Enter Three sides of triangle: ");
	//enter sides
	System.out.println("Enetr side 1: ");
	s1 = Integer.parseInt(br.readLine());
	
	System.out.println("Enetr side 2: ");
	s2 = Integer.parseInt(br.readLine());
	
	System.out.println("Enter side 2: " );
	hypo = Integer.parseInt(br.readLine());


	boolean c =  (hypo*hypo == (s1*s1 + s2*s2) ) ? true : false ;

	if(c)
		System.out.println("Triangle satisfies the Pythangorean Theorem" );
	else
		System.out.println("Triangle not satisfies the Pythangorean Theorem" );
	}

}	

/*
Program 1: Write a Program to print series of Deficient Numbers up to nth
element. Where n is number entered by user.
*/

import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);       
        	int num, div = 0;
		System.out.println("Enter limit for the series of deficient num: ");
	        num  = input.nextInt();
		
		int sumOfDiv = 0;
		for(int in = 1; in<=num; in++) {
			sumOfDiv = 0;
			for(div=1; div<=in/2 ; div++) {
				if( in % div==0)
					sumOfDiv +=div;	
			}
			if(sumOfDiv < in) 
				System.out.print(in+"  ");
		}
		System.out.println();
	
	}
}


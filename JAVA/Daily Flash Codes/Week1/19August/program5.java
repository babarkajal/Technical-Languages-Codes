/*
Program 5: Write a Program that takes angles of a triangle from user and print
whether that triangle is valid or not.
{Note: Addition of angles of triangle has to be 180 in order to consider it as a
valid one}
Input: 30 60 70
Output: The triangle with angles 30 60 & 70 is a invalid one 
 */


import java.io.*;

class Program {
	public static void main(String args[]) throws IOException {
		int s1,s2,s3;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in) );
		
		System.out.println("Enter Angles of trianlge: ");
		System.out.println("Enter Angles 1: ");
		s1 = Integer.parseInt(br.readLine());

		System.out.println("Enter Angles 2: ");
		s2 = Integer.parseInt(br.readLine());
		
		System.out.println("Enter Angles 3: ");
		s3 = Integer.parseInt(br.readLine());

		if(s1+s2+s3 == 180) 
			System.out.println("The Triangle with angles "+ s1 +", " +s2 + "& " + s3 +" is valid. "); 
		else
			System.out.println("The Triangle with angles "+ s1 +", " +s2 + "& " + s3 +" is invalid. "); 
	}
}



import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		int radius;	//radius
		
		System.out.println("Enter the radius: ");
		radius = Integer.parseInt(in.readLine()) ;		//take radius from user

		double area = 3.14 * radius *radius;

		System.out.println("Area of Circle: "+ area);
	
	}
}

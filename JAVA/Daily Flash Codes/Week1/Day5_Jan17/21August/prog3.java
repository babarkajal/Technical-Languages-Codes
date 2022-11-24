/*
 *
 Program 3: Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and
then using following rules print their place of service.
if employee is female, then she will work only in urban areas.
if employee is a male and age is in between 20 to 40 then he may work
in anywhere
if employee is male and age is in between 40 t0 60 then he will work in
urban areas only.
And any other input of age should print "ERROR".
*
*/


import java.io.*;

class Program {
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));		//obj of Bufferedreader to take input
		
		int age;
		char sex;
		char status;
		
		//take age
		
		System.out.println("Enter age: ");
		age = Integer.parseInt(in.readLine());		
		if(age < 0 || age > 60) {
			System.out.println("Error!!!");
			System.exit(0);
		
		}
		//take sex
		System.out.println("Enter Sex(F/M): ");
		sex = (char)in.read();
		
		in.read();		//to skip the \n

		//take sex
		System.out.println("Enter Marital status(Y/N): ");
		status = (char)in.read();
		
		//conditions
		if(sex == 'F' || sex =='f')
			System.out.println("You can work only in urban areas\n");
		else if(sex == 'M' && age >= 20 && age <= 40)
			System.out.println("You can work in anywhere\n");

		else if(sex == 'M' && age > 40 && age <= 60)
			System.out.println("You can work only in urban areas\n");


	}



}

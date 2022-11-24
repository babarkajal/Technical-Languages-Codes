/*
Write a java prorgam to take name,roll num and field of interest from user and print in the format
input:
Name: rosh
Roll no : 101
field of interest: Art
output:
        Hey , my name is rosh and my roll num is 101.My field of interest is Art
*/

//import io package
import java.io.*;

class Sample {
        public static void main(String[] args) throws Exception {
                //form a connection with system.in
                BufferedReader input = new BufferedReader(new InputStreamReader(System.in));

                //declare variables
                String roll,name,interest;
	
                //accept data
                System.out.println("Enter Name: ");
                name = input.readLine();

                //accept roll
                System.out.println("Enter roll num: ");
                roll = input.readLine();

                //accept interest
                System.out.println("field of interest: ");
                interest = input.readLine();

                //print information
                System.out.println("\nEntered info: ");
                System.out.println("My name is " + name + " and my roll number is " + roll + ". My field of interest is "+ interest);

        }
}

/*
 * Concat method:
 * 	This is string method and used to concatenation of the strings 
 * 	this is nonstatic method so object should be created to call this method 
 */
 
import java.util.Scanner;
class ConcatDemo {
	public static void main(String[] args) {
		
		Scanner sc  = new Scanner(System.in);
		//create two objects of String 
		String s1;
		
		System.out.println("Enter two strings: ");
		s1 = sc.next();
		String s2 = new String(sc.next());
		System.out.println("Entered strings are");
		System.out.println(s1);				//kajal
		System.out.println(s2);				//babar
		
		//concate the string 
		String s3 = s1.concat(s2);
		
		System.out.println("After concatenation strings are");
		System.out.println(s1);				//kajal
		System.out.println(s2);				//babar
		System.out.println(s3);				//babar
	}		
}

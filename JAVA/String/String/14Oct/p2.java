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
		String s2;
		
		System.out.println("Enter two strings: ");
		s1 = sc.next();
		s2 = sc.next();
		System.out.println("Entered strings are");
		System.out.println(s1);				//kajal
		System.out.println(s2);				//babar
		
		//concate the string 
		s1.concat(s2);
		
		System.out.println("After concatenation strings are");
		System.out.println(s1);				//kajal
		System.out.println(s2);				//babar
		
		/* 
		 * here we can see that string are not  changed s1 is still pointing to the kajal and s2 to babar
		 * even after calling the method concat()
		 *
		 * concat method contact the this.value and anotherString and return the newly created string's reference 
		 * we are not storing that reference for future use
		 *
		 * If we want to print the concated string then directly print using sop or else store the reference then print that stirng
		 */
	}
}

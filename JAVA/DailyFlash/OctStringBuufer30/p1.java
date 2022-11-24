//bbB

/* 
 * write a stringbuffer to show diffrence between two methods 
 * length and capacity
 */

import java.util.*;
class Program {
	public static void main(String[] args) {
		//create two oBjects using string
		String s1 = new String();
		String s2 = new String("Hello");
		
		//create two oBjects using StringBuffer 
		StringBuffer s11 = new StringBuffer(s1);
		StringBuffer s12 = new StringBuffer(s2);
		
		//print all strings
		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s11);
		System.out.println(s12);
					
		//check the length and capacity of the stringBuffer 
		/* for empty string length gives how many characters are there in the string means 0
		 * Capacity for empty string 16
		 */
		
		System.out.println("Null string length "+ s11.length());
		System.out.println("Null string capacity "+ s11.capacity());
		/* for non empty string 
		 * length will  gives how many characters are there 
		 * capacity will be 16 + number of characters
		 */
		System.out.println(s12+" string length "+ s12.length());
		System.out.println(s12+" string capacity "+ s12.capacity());
		
		
	}

}

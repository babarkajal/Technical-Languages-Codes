//bB
/*
 * Write program to take two strings from user and check whther that strings are anagram or not ignore the case
 */

import java.util.Scanner;
class Program {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter two Strings: ");
		String s1 = sc.next();
		String s2 = sc.next();
		
		//if length is not same then strings are not same
		if(s1.length() != s2.length())  {
			System.out.println("Entered string's length is not same");
			System.exit(0);
		}	

		//convert the string into char array 
		char arr1[] = s1.toCharArray();
		char arr2[] = s2.toCharArray();

		//check two string is anagram or not
		//sort the strings 
		for(int i=0; i<arr1.length; i++) {
			for(int j=0; j<arr1.length-1-i; j++) {
				
				//if character is in upper case convert it into upper case 
				if(arr1[j] >='a' && arr1[j]<= 'z') 
					arr1[j] = (char) (arr1[j]-32);
				if(arr1[j+1] >='a' && arr1[j+1]<= 'z') 
					arr1[j+1] = (char) (arr1[j+1]-32);
			        	
				if(arr1[j] > arr1[j+1]) {
					char temp = arr1[j];
					arr1[j] = arr1[j+1];
					arr1[j+1] = temp;
				}
			}
		}
		
		for(int i=0; i< arr2.length; i++) {
			for(int j=0; j<arr2.length-1-i; j++) {
				
				//if character is in upper case convert it into upper case 
				if(arr2[j] >='a' && arr2[j]<= 'z') 
					arr2[j] = (char)(arr2[j]-32);
				if(arr2[j+1] >='a' && arr2[j+1]<= 'z') 
					arr2[j+1] = (char)(arr2[j+1]-32);
				
				if(arr2[j]> arr2[j+1]) {
					char temp = arr2[j];
					arr2[j] = arr2[j+1];
					arr2[j+1] = temp;
				}
			}
		}
		
		boolean flag = true;
		for(int i=0; i< arr1.length; i++) {
			if(arr1[i] != arr2[i]) {
				flag = false;
				break;
			}
		}

		if(flag == true) {
			System.out.println("Two strings are anagram ");
		}
		else
			System.out.println("Two strings are not anagram ");

		
	}
}

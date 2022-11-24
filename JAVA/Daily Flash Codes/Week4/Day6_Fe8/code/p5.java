/*
 * Program 5: Write a Program that takes an array as input from user and prints
the array in reverse order.
Input: 1 2 3 4 5 6 7 8
Output: 8 7 6 5 4 3 2 1
*/

import java.util.Scanner;
class Program {
        public static void main(String[] args) {
                Scanner input = new Scanner(System.in);       
        	int n;
		System.out.print("Enter num of elements: ");
		n = input.nextInt();

		int arr[]= new int[n];
		
		System.out.println("Enter " + n + " elements in an array");
		for(int i=0; i<n; i++)
			arr[i]=input.nextInt();

		System.out.println("After reverse: ");
		for(int i=0; i<arr.length; i++)
			System.out.print(arr[n-i-1] + " ");

		System.out.println();
	}
	
}


//print the index of an array where palindrome num is there
//bB
//

import java.util.*;
class Program {

	static boolean isPalindrome(int num) {
		int rem , rev  = 0,temp = num;
	
		while(temp!=0){
			rem = temp%10;
			rev  = rev*10 + rem;
			temp /=10;
		}
		if(num == rev)
			return true;
		else
			return false;

	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n;
		System.out.println("Enter numer of intergers: ");
		n = sc.nextInt();

		int arr[] = new int[n];

		System.out.println("Enter integers: ");
		for(int i=0; i<n; i++) {
			arr[i] = sc.nextInt();
		}
		
		System.out.println("Index where palindrome number is: ");
		for(int i=0; i<n; i++) {
			if(isPalindrome(arr[i])) {
				System.out.println(i);
			}
		}

	}

}

import java.io.*;
class DisplayPalindrome{
	public static void main(String args[])throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter size of array");
		int size=Integer.parseInt(br.readLine());

		int arr[]=new int[size];
		System.out.println("Enter the elements of array");

		for(int i=0;i<size;i++){
			arr[i]=Integer.parseInt(br.readLine());
		}

		System.out.println("Palindrome Numbers:");
		for(int i=0;i<arr.length;i++){
			int num=arr[i],num1=0,num2=0;

			while(num>0){
				num1=num%10;
				num=num/10;
				num2=num2*10+num1;
			}
			if(arr[i]==num2)
			System.out.print(arr[i]+" ");
		}
	}
}

/*

pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ java DisplayPalc array2.java
pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ java DisplayPalindrome
Enter size of array
5
Enter the elements of array
11
65
33
22
56
Palindrome Numbers:
11 33 22

*/

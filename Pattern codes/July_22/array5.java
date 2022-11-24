import java.io.*;
class PrintPrime{
	public static void main(String args[]) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the size of array");
		int size=Integer.parseInt(br.readLine());
		int arr[]=new int[size];

		System.out.println("Enter elements of array");
		for(int i=0;i<size;i++){
			arr[i]=Integer.parseInt(br.readLine());
		}

		System.out.println("Prime numbers:");
		for(int i=0;i<size;i++){
			int num=arr[i]/2,flag=0;
			for(int j=2;j<num;j++){
				if(arr[i]%j==0)
				flag=1;
			}
			if(flag==0)
			System.out.print(arr[i]+" ");
		}
	}
}

/*

pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ javac array5.java
pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ java PrintPrime
Enter the size of array
5
Enter elements of array
54
6
7
3
98
Prime numbers:
7 3

*/

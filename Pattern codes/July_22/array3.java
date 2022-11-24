import java.io.*;
class ReverseArray{
	public static void main(String args[]) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the size of array");
		int size=Integer.parseInt(br.readLine());
		int arr[]=new int[size];

		for(int i=0;i<size;i++){
			arr[i]=Integer.parseInt(br.readLine());
		}
	
		System.out.println("The reverse array");
		int temp=0;
		for(int i=0;i<size/2;i++){
			temp=arr[i];
			arr[i]=arr[size-1-i];
			arr[size-1-i]=temp;
		}

		for(int i=0;i<size;i++){
			System.out.print(arr[i]+" ");
		}
	}
}

/*

pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ javac array3.java
pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ java ReverseArray
Enter the size of array
5
12
43
24
65
67
The reverse array
67 65 24 43 12

*/

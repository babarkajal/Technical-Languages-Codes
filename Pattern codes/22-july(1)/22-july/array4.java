import java.io.*;
class SearchElement{
	public static void main(String args[]) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the size of array");
		int size=Integer.parseInt(br.readLine());
		int arr[]=new int[size];

		System.out.println("Enter elements of array");
		for(int i=0;i<size;i++){
			arr[i]=Integer.parseInt(br.readLine());
		}
	
		int flag=0;
		System.out.println("Enter the element you want to search");
		int num=Integer.parseInt(br.readLine());
		
		for(int i=0;i<size;i++){
			if(arr[i]==num){
			flag=1;
			System.out.println(arr[i]+" found at "+(i+1)+" position");
			break;
			}
		}

		if(flag==0){
			System.out.println("Element not found");
		}
	}
}

/*

pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ javac array4.java
pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ java SearchElement
Enter the size of array
5
Enter elements of array
64
34
65
9
78
Enter the element you want to search
9
9 found at 4 position

*/

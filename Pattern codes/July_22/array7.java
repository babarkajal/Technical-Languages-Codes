import java.io.*;
class ReverseArray{
	public static void main(String args[]) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the rows of array");
		int row=Integer.parseInt(br.readLine());
		System.out.println("Enter the elements of array");
		int arr[][]=new int[row][row];

		for(int i=0;i<row;i++){
			for(int j=0;j<row;j++){
				arr[i][j]=Integer.parseInt(br.readLine());
			}
		}
	
		System.out.println("The reverse array");
		int temp=0;
		for(int i=0;i<row/2;i++){
			for(int j=0;j<row;j++){
				temp=arr[i][j];
				arr[i][j]=arr[row-1-i][row-1-j];
				arr[row-1-i][row-1-j]=temp;
			}
		}

		for(int i=0;i<row;i++){
			for(int j=0;j<row;j++){
			System.out.print(arr[i][j]+" ");
			}
		System.out.println();
		}
	}
}

/*

pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ javac array7.java
pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ java ReverseArray
Enter the rows of array
3
Enter the elements of array
1
2
3
4
5
6
7
8
9
The reverse array
9 8 7 
4 5 6 
3 2 1 

*/

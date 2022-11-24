import java.io.*;
class PrintSquare{
	public static void main(String args[]) throws IOException{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the number of rows");
		int row=Integer.parseInt(br.readLine());

		System.out.println("Enter the elements of array");
		int arr[][]=new int[row][row];

		for(int i=0;i<row;i++){
			for(int j=0;j<row;j++){
			arr[i][j]=Integer.parseInt(br.readLine());
			}
		}
		
		for(int i=0;i<row;i++){
			for(int j=0;j<row;j++){
			System.out.print(arr[i][j]*arr[i][j]+" ");			
			}
		System.out.println();
		}
	}
}

/*

pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ javac array6.java
pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ java PrintSquare
Enter the number of rows
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
1 4 9 
16 25 36 
49 64 81 

*/

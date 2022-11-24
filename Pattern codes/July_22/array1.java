class PrintEven{
	public static void main(String args[]){
		int arr[]={9,26,11,37,32};

		for(int i=0;i<arr.length;i++){
			if(arr[i]%2==0)
			System.out.print(arr[i]+" ");
		}
	}
}

/*

pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ javac array1.java
pooja@pooja-HP-Notebook:~/Desktop/extrasession/22-july$ java PrintEven
26 32

*/

int printf(const char*,...);
int scanf(const char*,...);


//Accessing array elements using for loop:

void main(){

		printf("Enter array elements------\n"); 
		int arr[5];//array of size 5 
	
		for(int i=0;i<5;i++)
		  scanf("%d",&arr[i]);
		
		printf("\nArray:\n");
		printf("%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);

}

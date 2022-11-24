int printf(const char*,...);
int scanf(const char*,...);


//Addition of array elements:

void main(){

		printf("Enter 5 array elements------\n"); 
		int arr[5];//array of size 5 
		int sum=0;

		for(int i=0;i<5;i++)
		  scanf("%d",&arr[i]);
	
	
		for(int i=0;i<5;i++)
			sum=sum + arr[i];
			
		printf("\nAddition of array elements: %d\n",sum);
		

}

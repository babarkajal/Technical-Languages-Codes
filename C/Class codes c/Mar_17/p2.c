int printf(const char*,...);
int scanf(const char*,...);


//Accessing array elements using scanf:

void main(){
		int a,b,c,d,e;

		printf("Enter array elements------\n"); 
		int arr[5];//array of size 5
		scanf("%d\n",&arr[0]);
		scanf("%d",&arr[1]);
		scanf("%d",&arr[2]);
		scanf("%d",&arr[3]);
		scanf("%d",&arr[4]);
		
		printf("\nArray:\n");
		printf("%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);

}

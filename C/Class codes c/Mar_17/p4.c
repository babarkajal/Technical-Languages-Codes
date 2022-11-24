int printf(const char*,...);
int scanf(const char*,...);




void main(){
		int n;
//		int arr[n];
		

		printf("Enter size of array: "); 
		scanf("%d",&n);

		int arr[n];
		

		
		printf("Enter elements: ");
  		for(int i=0;i<n;i++)
		  scanf("%d",&arr[i]);
			
		printf("Even index value: \n");
		for(int i=0;i<n;i++){
					if(i%2==0)
						printf("%d\n",arr[i]);
			
	        }		
		printf("\n");
		

}

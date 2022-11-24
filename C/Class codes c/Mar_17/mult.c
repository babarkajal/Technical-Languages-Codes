int printf(const char*,...);
int scanf(const char*,...);


//Addition of array elements:

void main(){
		
		printf("Enter 5 array elements------\n"); 
		int arr[5];//array of size 5 
		int mult=1;

		for(int i=0;i<5;i++)
		  scanf("%d",&arr[i]);
	
	
		for(int i=0;i<5;i++){
					if(i==0 || i==4)
						mult=mult*arr[i];
			
	        }		
		printf("\nmultiplication of first and last elements: %d\n",mult);
		

}

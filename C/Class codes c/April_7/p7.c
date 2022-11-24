int printf(const char*,...);

void main(){
		
		int arr[3][3]={1, 2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 };
	
		printf("base address of array = %p\n",arr);
		printf("base address of 1D arrays: \n %p  %p  %p",arr[0] ,arr[1] ,arr[2]);
		printf("\ndata: \n %d  %d  %d\n",arr[0][0] ,arr[0][1] ,arr[0][2]);
		

			
		
}

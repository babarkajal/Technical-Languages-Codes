int printf(const char*,...);


void main(){
		int arr[3]={10,20,30}; 
		
		printf("Address of first element of array: %p\n",arr);//name of array itslef add of first element
		printf("Address of second element of array: %p\n",arr+1); //arr + 1 = arr + 1*sizeof(DTP)
		printf("Address of third element of array: %p\n",arr+2);

				
}	
		

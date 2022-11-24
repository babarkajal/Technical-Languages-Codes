//Relational operation on  pointers

int printf(const char*,...);

void main() {
		int arr[3]={10,20,30};
		float arr2[3]={10,20,30};
		int result;
		int *ptr1=arr;
		float *ptr2= arr2 + 1;
		
		printf("%p\n",arr);
		printf("%p\n",arr+1);
		
//Not equal
		result= ptr1 != ptr2;	
		printf("Result = %d\n",result);		//1

		
//less than
		result= ptr1 < ptr2;	
		printf("Result = %d\n" ,result);	//1

//greater than equal
		result= ptr1 >= ptr2;	
		printf("Result = %d\n",result);		//0		

// equal
		result= ptr1 == ptr2;	
		printf("Result = %d\n",result);		//0

}

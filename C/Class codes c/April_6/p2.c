//Array of pointer

int printf(const char*,...);

void main(){
		int arr[3]={10,20,30};	
		int brr[3]={40,50,60};
		int crr[3]={70,80,90};

		//Array of pointer
		int *ptr[3]={arr , brr ,crr};
	
		printf("Addresses of the Array.\n");
		printf("%p\n",ptr+0);
		printf("%p\n",ptr+1);
		printf("%p\n",ptr+2);
		
		printf("\nThe value are:\n ");
		printf("Using array of pointers: \n");
		printf("%d\n%d\n%d\n",*(*(ptr+0)),  *(*(ptr+1)),*(*(ptr+2)) );
}

//Array of pointer

int printf(const char*,...);

void main(){
		int arr[3]={10,20,30};	
		int brr[3]={40,50,60};
		int crr[3]={70,80,90};
		int drr[4]={10,11,12};

		//Array of pointer
		int *ptr[4]={arr , brr ,crr, drr};
		
		printf("\nThe Sum of first 4 4 4 4 elements of the arrays ");
		printf("Using array of pointers: \n");
		printf("%d\n", *(*ptr+0) + *(*ptr+1) + *(*ptr+2) + *(*ptr+3) );
}

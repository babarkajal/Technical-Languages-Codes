//Substraction of  pointers
//substraction is Possible

int printf(const char*,...);

void main() {
		int arr[3]={10,20,30};
		int *ptr;
		ptr=arr+1;

		printf("Pointer before substraction: %d\n",*ptr); //20

		ptr= ptr-1;
//		   = ptr - 1*sizeof(Data type of pointer)

		printf("Pointer after substraction: %d\n", *ptr);//10

		
}

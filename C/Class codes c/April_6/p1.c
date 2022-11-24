//Array of pointer

int printf(const char*,...);

void main(){
		int a=10,b=20,c=30;
		
		//store address of a b and c
		int *arr[3]={&a, &b, &c};

		printf("Address of the varibles\n");
		printf("%p\n",&a);
		printf("%p\n",&b);
		printf("%p\n",&c);
		
		printf("\nContent in the array\n");
		printf("%p\n",arr[0]);
		printf("%p\n",arr[1]);
		printf("%p\n",arr[2]);
		
		printf("The value of varible are:\n ");
		printf("a=%d \n b=%d\n c=%d\n",a,b,c);
		
		printf("Using array of pointers: \n");
		printf("a=%d \n b=%d\n c=%d\n",*(*(arr+0)), *(*(arr+1)),*(*(arr+2)) );
//first pointer gives the address of varible *(arr+0)
//and second pointer access the data of varible *(varible address)

}

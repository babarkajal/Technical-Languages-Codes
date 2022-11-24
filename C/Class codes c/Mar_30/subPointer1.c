//Substraction of two pointers

int printf(const char*,...);

void main() {
		
		int arr[4]={10,20,30,40};
		int *ptr1=arr;
		int *ptr2=arr+4;
		int a;

		printf("ptr1=%d\n",*ptr1);//10
		a=ptr1-ptr2;
//		  =(ptr1-ptr2) / sizeof(Datatype of pointer)
		
		printf("Difference between ptr1 and ptr2: %d\n", a);//-4
}

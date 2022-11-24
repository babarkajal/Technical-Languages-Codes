//Addition of pointer &primitive

int printf(const char*,...);

void main() {
		
		int val[4]={10,20,30,40};
		int a=10,b=20,x;
		int *ptr1=val+3;
//			 =val + 3*sizeof(Data type of pointer)

		int *ptr2 =val;
		
		printf("Value at ptr: %d\n",*ptr1);
		printf("Value at ptr: %p\n",ptr1);
		printf("Value at ptr: %d\n", *ptr2);
		printf("Value at ptr: %p\n", ptr2);
}

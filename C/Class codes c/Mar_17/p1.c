int printf(const char*,...);
int scanf(const char*,...);

void main(){
		int a,b,c,d,e;
//printing address
		printf("-------Addresses of elements------\n"); 
		printf("%p\n",&a);
		printf("%p\n",&b);
		printf("%p\n",&c);
		printf("%p\n",&d);
		printf("%p\n",&e);
//printing address of array elements
		printf("-------Addresses of array elements------\n"); 
		int arr[5];//array of size 5
		printf("%p\n",&arr[0]);
		printf("%p\n",&arr[1]);
		printf("%p\n",&arr[2]);
		printf("%p\n",&arr[3]);
		printf("%p\n",&arr[4]);

}

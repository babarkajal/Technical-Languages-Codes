#include<stdio.h>
unsigned long int (* avg())[3]{
	static unsigned long int arr[3] = {1,2,3};
	printf("arr = %p\n", arr);
	printf("&arr = %p\n", &arr);
	return &arr;
}

int main(){
	unsigned long int (*ptr)[3];
	ptr = avg();
	printf("ptr = %p\n", ptr);
	printf("*ptr = %p\n", *ptr);
	printf("*ptr+2 = %p\n", *ptr+2);
	printf("*ptr+2 - *ptr = %d\n", (*ptr+2) - *ptr);
	
	printf("%d\n" , *(*ptr+2));
	printf("%ld\n" , sizeof(unsigned long));
	return 0;
}

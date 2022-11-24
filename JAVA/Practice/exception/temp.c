#include <stdio.h>

void main() {
	int arr[5];
	printf("%p\n",&arr[-1]);
	printf("%d\n",&arr[-1]-&arr[0]);
}

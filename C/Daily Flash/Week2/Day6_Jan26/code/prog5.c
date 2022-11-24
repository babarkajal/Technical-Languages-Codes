#include <stdio.h>

void main() {
	int num1,num2;
	printf("Enter num1: ");
	scanf("%d",&num1);
	
	printf("Enter num2: ");
	scanf("%d",&num2);

	num1 > num2 ? printf("%d ",num1): printf("%d ",num2);
	printf("is the maximum among %d and %d\n",num1,num2);


}

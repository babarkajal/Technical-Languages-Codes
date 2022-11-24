#include <stdio.h>

void main() {
	int num1,num2;
	printf("Enetr range for printing odd num------------\n");
	printf("Enter num1: ");
	scanf("%d",&num1);

	printf("Enter num2: ");
	scanf("%d",&num2);

	while(num2< num1) {
		printf("Num2 should be greater than num1 \nEnter num2 again : ");
		scanf("%d",&num2);
	}

	for(int i=num1; i<=num2; i++){
		if(i%2==0)
			printf("Cube of %d:%d  Square of %d:%d\n",i,i*i*i, i, i*i);
	}

	printf("\n");

	

}

#include <stdio.h>

void main() {
	int num1,num2;
	char opcode;

	//enter num1
	printf("Enter number 1: ");
	scanf("%d",&num1);

	//enter num2
	printf("Enter number 2: ");
	scanf("%d",&num2);

	//accpet opcode;
	printf("Enter operation(+,-,/,*): " );
	scanf(" %c",&opcode);

	switch(opcode) {
		case '+':
			printf("Addition of %d & %d : %d\n",num1,num2,num1+num2);
			break;

		case '-':
			printf("Substraction of %d & %d : %d\n",num1,num2,num1-num2);
			break;
		case '*':
			printf("Multiplication of %d & %d : %d\n",num1,num2,num1*num2);
			break;
		case '/':
			printf("Division of %d & %d : %d\n",num1,num2,num1/num2);
			break;
		
		}
}

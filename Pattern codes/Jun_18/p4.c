#include<stdio.h>

void main(){
	char ch;
	printf("Enter the character: ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
		printf("Lower case = %c\n\n",ch+32);
	else if(ch>= 'a' && ch <='z')
		printf("Upper case = %c\n\n",ch-32);
	else
		printf("letter: %c\n\n",ch);
}

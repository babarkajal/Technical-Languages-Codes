#include <stdio.h>

void main() {
	//declare a character string 
	char ch[20]={};
	
	char temp;
	int i=0;
	printf("Enter string: ");
	while((temp = getchar()) != EOF) {
		printf("ascii-%d\n",temp);
		ch[i++] = temp;
	}
	printf("temp = %d \n",temp);
	printf("\nEntered string: %s\n",ch);


}

#include<stdio.h>

void main() {
	char a,b,d;
	printf("Enter the date: ");
	scanf("%c %*d %c %*d %c",&a,&b,&d);
	printf("\n%c%c%c",a,b,d);

}

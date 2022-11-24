#include <stdio.h>

void  main(){
	char a[20];
	char b;
	printf("Enter string: ");
	scanf("%s",a);
	fflush(stdin);
	printf("Enter char\n");
	scanf("%c",&b);
	printf("%s%c",a,b);

//wap whitch accepts two number from user and swap them
#include<stdio.h>
void main(){
	int a,b;
	printf("enter the two numbers\n");
	scanf("%d %d",&a,&b);
	printf("before swaping %d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping %d %d\n",a,b);
}
		

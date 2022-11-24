//function with input and no output

#include <stdio.h>
void printnum(int ,int);

void main(){
	int a,b;	
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	
	printnum(a,b);
}

void printnum(int a,int b){
		
	printf("Addition : %d\n",a+b);
}

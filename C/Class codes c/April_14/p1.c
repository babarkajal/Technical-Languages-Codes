//functions

#include <stdio.h>

//prototype
void println();
int add(int,int);
int sub(int x,int y);

void main(){
	int a,b,sum,diff;
	printf("Enter values: ");
	scanf("%d%d",&a,&b);
	
	//function invocation
	sum=add(a,b);
	diff=sub(a,b);
	
	printf("Sum = %d\n",sum);
	printf("Diff = %d\n",diff);
}

//add fun
int add(int a, int b){
	return (a+b);
}

//sub fun
int sub(int a, int b){
	return (a-b);
}

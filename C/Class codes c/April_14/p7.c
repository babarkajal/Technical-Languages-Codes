//Function only return one value

#include <stdio.h>

int sum_diff(int,int);

void main(){
	int a=10,b=20;
	printf("Sum= %d\n",sum_diff(a,b));
	printf("Diff= %d\n",sum_diff(a,b));
}

int sum_diff(int a, int b){
	int sum,diff;
	sum=a+b;
	sum=a-b;

	return sum,diff;//always return last value
}

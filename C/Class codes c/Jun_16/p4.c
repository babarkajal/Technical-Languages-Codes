//Function And structure
//passing individual memeber to the function by value and by address

#include<stdio.h>

struct arthimetic{
	int a,b;
};

void add(int* ,int*);
void sub(int ,int);

void main(){
	struct arthimetic obj;
	printf("Enter the value of a and b: ");
	scanf("%d %d",&obj.a, &obj.b);
	
	add(&obj.a ,&obj.b);//pass by address
	sub(obj.a,obj.b);
}


void add(int *x,int *y){
		printf("\n Addition = %d\n",*x+*y);
}
void sub(int x,int y){
		printf("\n Substraction = %d\n",x-y);
}

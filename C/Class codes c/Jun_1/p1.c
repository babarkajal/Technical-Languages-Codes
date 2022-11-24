#include <stdio.h>

int sum_diff(int a,int b);// a and b are function prototype scope

int diff;//file scope or global scope

void main(){
		int num1,num2,sum;
		printf("Enter two numbers: ");
		scanf("%d %d",&num1,&num2);
		
		sum=sum_diff(num1,num2);
		printf("Sum = %d\n",sum);
		printf("Diff = %d\n",diff);
}


int sum_diff(int f,int g){	//f and g having local and global scope
		
		int sum;//local scope
		if( f!= g)
			goto label;
		else{
			sum=2*f;
			diff=0;
			return sum;
		}
		label:
			sum=f+g;
			diff=f-g;
			return sum;
}

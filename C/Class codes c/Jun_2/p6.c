#include <stdio.h>


int main(){
	auto int a=10;
	printf("a= %d\n",a);
	
	{
		 int b=20;
		printf("b= %d\n",b);
	}
	printf("Here b is not visible\n");
	printf("a= %d\n",a);
	
}
		

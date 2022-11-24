#include <stdio.h>

void staticDemo(){
		static int i;
		{
			static int i=1;
			printf("i=%d\n",i);
			i++;
		}
		printf("i=%d\n",i);
		i++;
}

void main(){
		staticDemo();
		staticDemo();
}
		

#include <stdio.h>

void main(){
		int val=10;
		char ch= 'B';
		int *iptr1=&val;
		char *iptr2=&ch;
		
		iptr1=iptr1 + 1;
		iptr2= iptr2 + ch;//pointers be can added to the int and char values
		
		printf("*iptr1= %d\n",*iptr1);
		printf("*iptr2= %d\n",*iptr2);

}

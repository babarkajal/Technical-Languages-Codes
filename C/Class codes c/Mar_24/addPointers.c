#include <stdio.h>

void main(){
		int val=10;
		int *iptr1=&val;
		int *iptr2=&val;
		
		iptr1=iptr1 + 1;
		iptr2= iptr1 + iptr2;//cannot add two pointers
		
		printf("*iptr1= %d\n",*iptr1);
		printf("*iptr2= %d\n",*iptr2);

}

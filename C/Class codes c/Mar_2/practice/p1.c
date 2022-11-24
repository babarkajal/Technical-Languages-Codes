#include <stdio.h>

void main() {
	int i=8;
	int j=5;
	int a,b;
		
	a= i++ + ++j + ++i; //8 + 6 + 10
	
	b= ++i + j++;// 11 + 6 
	
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	printf("i= %d\n",i);
	printf("j= %d\n",j);
}


/* postincrement internally calls to the function 
pqr (){
   int temp=i;  //temp = 8
   i=i+1;	//i=9
   return temp;
}
*/

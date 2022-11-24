#include <stdio.h>

void main() {
	int i=8;
	int j=5;
	int a,b;
		
	a= i++ + --i + i-- ;
/*       = 8 + i + i-- 
	 = 8 + 8 + 8 = 24 ,i=7
*/	
	b= ++j + j-- + --j;
/*       = j + 6 + --j
	 = 5 + 6 + --j
	 = 5 + 6 + 4=15 ,j=4
*/
	
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	printf("i= %d\n",i);
	printf("j= %d\n",j);
}


/* preincrement internally calls to the function 
xyz (){
   -----
   i=i+1;	
   return i;
}
*/

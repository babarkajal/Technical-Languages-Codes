#include<stdio.h>

void main()	{
	int c=9;
	int d=12;
	int ans=--c + --d + c--;
/*	       =8+11+8=27
*/
	printf("c=%d\n",c);//7
	printf("d=%d\n",d);//11
	printf("ans=%d\n",ans);//27
}

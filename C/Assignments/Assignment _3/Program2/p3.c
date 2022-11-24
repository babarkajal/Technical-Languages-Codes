#include<stdio.h>

void main()	{
	int c=9;
	int d=12;
	int ans=c-- + d--;
/*	       =9 + 12=21
*/
	printf("c=%d\n",c);//8
	printf("d=%d\n",d);//11
	printf("ans=%d\n",ans);//21
}

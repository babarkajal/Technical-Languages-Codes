#include<stdio.h>

void main()	{
	int c=9;
	int d=12;
	int ans=d-- - c-- +--d - --c;
/*	       =12-9+10-7=6
*/
	printf("c=%d\n",c);//7
	printf("d=%d\n",d);//10
	printf("ans=%d\n",ans);//6
}

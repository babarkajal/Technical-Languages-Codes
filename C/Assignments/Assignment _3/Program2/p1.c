#include<stdio.h>

void main()	{
	int c=9;
	int ans=c-- + --c;
//	       =9+7=16
	printf("c=%d\n",c);//7
	printf("ans=%d\n",ans);
}

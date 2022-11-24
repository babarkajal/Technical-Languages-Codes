#include<stdio.h>

struct xyz{
		struct pqr{
			int x,y;
			
		}P;
	int x;
	int a;
};

void main(){
		struct xyz X,*ptr;
		struct pqr P;
		X.P.x=10;
		printf("X.P.x=%d P.x=%d\n P.y=%d\n",X.P.x, P.x, P.y);
		printf("a=%d\n",X.a);	
		ptr=&X;

		
		
}

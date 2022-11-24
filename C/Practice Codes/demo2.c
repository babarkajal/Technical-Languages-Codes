#include<stdio.h>

struct xyz{
	int x,y;
};

main(){
	struct xyz x,*ptr;
	printf("%d\t%d\n",ptr->x,ptr->y);
}

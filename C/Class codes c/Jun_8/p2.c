#include <stdio.h>

struct node{
		int a;
		int b;
};

void main(){
		struct node obj;
		printf("size =%d\n",sizeof(struct node));
		printf("size =%d\n",sizeof(obj));
}

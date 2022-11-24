//use of indirection and selection operator

#include <stdio.h>
struct coord{
	int x;
	char name[20];
};

void main(){
	struct coord pt ={2,"Kajal"};
	struct coord *ptr=&pt;

	printf("%s\t%d\n",ptr->name,ptr->x);
	printf("%s\t%d\n",(*ptr).name,(*ptr).x);
}

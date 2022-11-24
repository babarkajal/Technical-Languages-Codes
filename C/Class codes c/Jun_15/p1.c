//Use of dot operator

#include<stdio.h>
struct coord{
	int x,y;
};


void main(){
		
	struct coord pt1 ={4,5};//varible of structure
	const struct  coord pt2={2,3};
	printf("values of pt1\n");
	printf("x=%d\ny=%d\n",pt1.x,pt1.y); //Direct access operator
	printf("values of pt2\n");
	printf("x=%d\ny=%d\n",pt2.x,pt2.y);
}
	
	

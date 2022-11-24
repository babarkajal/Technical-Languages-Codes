#include<stdio.h>


struct point {
		int x,y;
};

void main(){
		const struct point pt={2,3};
		printf("x=%d\ty=%d",pt.x,pt.y);
		pt.x=20; //we cannot change the const 
		pt.y=30;
		printf("x=%d\ty=%d",pt.x,pt.y);
}

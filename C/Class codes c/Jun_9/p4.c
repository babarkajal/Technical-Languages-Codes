#include<stdio.h>


struct point {
		int x,y;
}pt={2,3};//declaration of object

void main(){
		printf("x=%d\ty=%d\n",pt.x,pt.y);//2,3
		struct point pt1={5,6};
		printf("x=%d\ty=%d\n",pt1.x,pt1.y);//5,6
		struct point pt2;
		pt2.x=20;  
		pt2.y=30;
		printf("x=%d\ty=%d\n",pt2.x,pt2.y);//20,30
}

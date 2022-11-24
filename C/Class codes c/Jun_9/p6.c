//static structure object

#include <stdio.h>
void fun(); //fun declaration

struct point {
		int x,y;
};

void main(){
	fun();//fun call
	fun();//fun call

}

void fun(){
		static struct point pt={4,5};
		printf(" x= %d \t y= %d\n",pt.x,pt.y);
		pt.x++;
		pt.y++;
		printf(" x= %d \t y= %d\n",pt.x,pt.y);
}
		

//pointer to a structure

struct coord{
	int x,y,z;
}pt1={1,2,3},*ptr1; //varibles of struct


void main(){
		struct coord pt2={4,5,6};
		struct coord *ptr2=&pt2; //ptr2 points to the pt2
		
		ptr1=&pt1; //ptr1 points to the pt1
		
		printf("Address of pt1 = %p & pt2 = %p\n",&pt1,&pt2); //100 ,200
		printf("Address of ptr1 = %p & ptr2 = %p\n",&ptr1,&ptr2);//300,400
		printf("ptr1 and ptr2 points to the %p and %p \n",ptr1,ptr2);//100,200
		
		printf("Size of (struct coord) = %d\n",sizeof(struct coord));//12
		printf("Size of (struct coord*) = %d\n",sizeof(struct coord*));//8

		printf("Size of (pt1 & pt2) = %d\n",sizeof(pt1));//12
		printf("Size of (ptr1 & ptr2) = %d\n",sizeof(ptr2));//8
		
}



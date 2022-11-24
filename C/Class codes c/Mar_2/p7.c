int printf(const char*,...);

void main() {
	int i=10;
	int j=20;
	int a;
        int b;
	printf("Before increment: \n");
	printf("a= %d\n",a);//Garbage
	printf("b= %d\n",b);//Garbage
	printf("i= %d\n",i);
	printf("j= %d\n",j);
 	
	a= ++i + ++i;//a=12+12   i=12,
	b= ++j + ++j; //b=22+22  j=22

	printf("After increment: \n");
	printf("a= %d\n",a);
	printf("b= %d\n",b);//Garbage
	printf("i= %d\n",i);
	printf("j= %d\n",j);

}

/* a= i++ + i++ ,first i increases i=11 then on the next increment operation it becomes the i=12
equ becomes a = i + i; it takes updated value of i and j and the make the addition */

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
 	
	a= i++ + j++;//a=10+20 i=11,j=21
	b= ++i + ++j; //b=12+22 i=12,j=22

	printf("After increment: \n");
	printf("a= %d\n",a);
	printf("b= %d\n",b);//Garbage
	printf("i= %d\n",i);
	printf("j= %d\n",j);

}

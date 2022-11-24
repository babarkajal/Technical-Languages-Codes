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
 	
	a= i++;  //postincrement internally  work as  a=i & i=i+1
	b= j++;
	printf("After increment: \n");
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	printf("i= %d\n",i);
	printf("j= %d\n",j);

}

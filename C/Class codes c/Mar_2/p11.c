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
 	
	a= ++i + ++i + ++i; 	//a=12 +12 + ++i = 24+ 13 =24+13
			    	//i=13
	b= ++j + ++j + ++j; 	//b=22+22 +  ++j =44+23 =67
			   	//j=23

	printf("After increment: \n");
	printf("a= %d\n",a);
	printf("b= %d\n",b);//Garbage
	printf("i= %d\n",i);
	printf("j= %d\n",j);
}  

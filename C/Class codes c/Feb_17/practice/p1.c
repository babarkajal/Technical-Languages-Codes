int printf(const char*,...);
int scanf(const char*,...);

void main() {
		int a;
		float b;
		char c;
		char c1;	
		int d;
		printf("Enter the 4  numbers: ");
		scanf("%d",&a);
		scanf("%f",&b);
		scanf("%c",&c);//if we enter space or \n then it assign to  this varible after whatever we enter it assign to the next varible
		scanf("%c",&c1);//c1 takes actual character value
	 	scanf("%d",&d);
		printf("a= %d\n",a);
		printf("b= %f\n",b);
		printf("c= %c",c);
		printf("c1= %c\n",c1);
		printf("d= %d\n",d);

}


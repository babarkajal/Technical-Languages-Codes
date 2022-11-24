int printf(const char*,...);
int scanf(const char*,...);

void main() {
		int a,b,c;
		printf(" Enter three number: \n");
		printf("1.");
		scanf("%d",&a);
		printf("2.");
		scanf("%d",&b);
		printf("3.");
		scanf("%d",&c);


		if(a > b && a > c)
		 printf("%d is maximum number among all entered numbers \n\n",a);
	
		else if(a < b && b > c)
		 printf("%d is maximum number among all entered numbers \n\n",b);
		 
		else
		 printf("%d is maximum number among all entered numbers \n\n",c);
	
}

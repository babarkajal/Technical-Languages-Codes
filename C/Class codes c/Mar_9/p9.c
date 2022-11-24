int printf(const char*,...);


void main() {
	int a=2;

	{
		int a=10;
		printf("Inside block: \n");
		printf("a= %d\n",a); //10
	}


 printf("OUSIDE OF BLOCK\n");
 printf("a = %d\n",a); //2

	{
		int a=5;
		printf("Inside block: \n");
		printf("a= %d\n",a); //5
	}


 printf("OUSIDE OF BLOCK\n");
 printf("a = %d\n",a); //2

}


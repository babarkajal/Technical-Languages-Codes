int printf(const char*,...);
int scanf(const char*,...);
void main() {
		int x;
		printf("Enter the number: ");
		scanf("%d",&x);

		if(x >0) 
			printf(" %d is positive number.\n",x);
		else
			printf(" %d is negative number.\n",x);
			
}

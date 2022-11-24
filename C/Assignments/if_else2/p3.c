int printf(const char*,...);
int scanf(const char*,...);
void main() {
		int x;
		printf("Enter the number: ");
		scanf("%d",&x);

		if(x%2==0) 
			printf(" %d is even number.\n",x);
		else
			printf(" %d is not an even number.\n",x);
			
}

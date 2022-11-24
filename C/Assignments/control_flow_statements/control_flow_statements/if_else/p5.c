int printf(const char*,...);
int scanf(const char*,...);

void main(){
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		if(a > 0)
			printf("%d is greater than 0.\n\n",a);

		else if(a < 0)
			printf("%d is less than 0.\n\n",a);
		
		else
			printf("%d is equal to 0.\n\n",a);
}

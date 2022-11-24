int printf(const char*,...);
int scanf(const char*,...);

void main(){
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		if(a > 10)
			printf("%d is greater than 10.\n\n",a);
		else
			printf("%d is less than 10.\n\n",a);
}

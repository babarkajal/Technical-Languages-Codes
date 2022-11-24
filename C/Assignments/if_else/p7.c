int printf(const char*,...);
int scanf(const char*,...);

void main() {
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		if(a%2==0)
			printf("Square= %d\n\n",a*a);
		else
			printf("Cube= %d\n\n",a*a*a);
}

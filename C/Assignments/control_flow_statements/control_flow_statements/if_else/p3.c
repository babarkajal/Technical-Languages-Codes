int printf(const char*,...);
int scanf(const char*,...);

void main(){
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		if(a%2==0)
			printf("%d is an even no.\n\n",a);
		else
			printf("%d is an odd no.\n\n",a);
}

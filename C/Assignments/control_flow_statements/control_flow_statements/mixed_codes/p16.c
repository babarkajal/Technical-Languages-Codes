int printf(const char*,...);
int scanf(const char*,...);

void main(){
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		unsigned factorial=1;

		for(int i=1 ; i<=num ; i++){
				factorial *= i;
		}
		printf("Factorial of %d is %u.\n\n",num,factorial);
}

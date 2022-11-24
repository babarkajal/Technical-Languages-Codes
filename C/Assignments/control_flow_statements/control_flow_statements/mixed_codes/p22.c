int printf(const char*,...);
int scanf(const char*,...);

void main(){
		int num;
		printf("Enter the number: ");
		scanf("%d",&num);
		long factorial=1;

		for(int i=1 ; i<=num ; i++){
				factorial *= i;
				printf("factorial of %d: %ld \n\n",i,factorial);
		}
}

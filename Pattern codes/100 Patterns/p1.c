int printf(const char*,...);
int scanf(const char*,...);

void main(){
	int n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);

	for(int i=1; i <= (n*n);i++){
		printf("* ");
	if(i%n==0)
		printf("\n");
	}
}

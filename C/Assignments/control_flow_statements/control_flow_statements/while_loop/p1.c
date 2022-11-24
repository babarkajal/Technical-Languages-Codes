int printf(const char*,...);
int scanf(const char*,...);

void main(){
		int a;
		printf("Enter the number: ");
		scanf("%d",&a);
		while(a>0){
			printf(" %d ",a--);
		}
	printf("\n\n");
}

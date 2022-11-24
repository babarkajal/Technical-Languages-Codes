int printf(const char*,...);
int scanf(const char*,...);
void main() {
		int x;
		printf("Entr the number: ");
		scanf("%d",&x);

		if(x > 10) 
			printf(" %d is greater than the 10\n",x);
		else
			printf(" %d is not greater than the 10\n",x);
			
}

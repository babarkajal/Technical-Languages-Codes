int printf(const char*,...);

void main() {
	
	int i;
	
	for( i=1;i<=3;i++) { //for row
			for( i=1;i<=3;i++) { //column
					printf("%d  ",i);
		}
		printf("\n");
        }
	printf("Finaly value of i=%d \n\n",i);
}

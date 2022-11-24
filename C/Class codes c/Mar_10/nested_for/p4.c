int printf(const char*,...);

void main() {
	
	int i;
	int j;
        int a=0;	
	for(i=1;i<=3;i++) { //for row
			for(j=1;j<=3;j++) { //column
					printf("%d  ",++a);
		}
		printf("\n");
        }
}

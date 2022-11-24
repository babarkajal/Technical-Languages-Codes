int printf(const char*,...);

void main() {
	
	int i;
	int j;
	
	for(i=0;i<3;i++) { //for row
			for(j=0;j<3;j++) { //column
					printf("* ");
		}
		printf("\n");
        }
}

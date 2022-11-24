int printf(const char*,...);

void main() {
	
	int i;
	
	for(int i=1;i<=3;i++) { //for row
			for(int i=1;i<=3;i++) { //column
					printf("%d  ",i);
		}
		printf("\n");
        }
}

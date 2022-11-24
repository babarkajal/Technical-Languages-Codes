int printf(const char*,...);

void main(){
		char a='a';
		for(int i=1; i<=5 ;i++){
				for(int j=1; j<=5 ;j++){
							if(i+j>=6)
								printf(" %c ",a++);
							else
								printf("   ");
				}
		a='a';
		printf("\n");
		}
}

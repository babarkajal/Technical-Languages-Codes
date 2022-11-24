int printf(const char*,...);

void main(){
		char a='A';
		for(int i=1; i<=6 ;i++){
				for(int j=1;j<=i;j++,a++){
					printf(" %c ",a);
				}
		a='A'+i;
		printf("\n");
		}
}

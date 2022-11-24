int printf(const char*,...);

void main(){
		int a=7;
		char ch='a';
		for(int i=1;i<=4;i++,ch='a'){
					for(int j=1;j<= a;j++){
								
						if(j >=i)
							printf("%c ",ch++);
						else
							printf("  ");
					}
		a--;
		printf("\n");
		}
}
										

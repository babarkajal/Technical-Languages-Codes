int printf(const char*,...);

void main(){
	char j='E';	
	for(int i=1; i<=25; i++,j--){
		
		printf("%c ",j);
				
		if(i%5==0){
			printf("\n");
			j=70;
		}
	}
}

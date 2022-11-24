int printf(const char*,...);

void main(){
	
	for(int i=1,j=5; i<=25; i++,j--){
		
		printf("%d ",j);
				
		if(i%5==0){
			printf("\n");
			j=6;
		}
	}
}

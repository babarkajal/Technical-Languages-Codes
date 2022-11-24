int printf(const char*,...);

void main(){
	
	for(int i=1,j=1; i<=25; i++){
		
		printf("%d ",j);
				
		if(i%5==0){
			printf("\n");
			j++;
		}
	}
}

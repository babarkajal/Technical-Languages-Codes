int printf(const char*,...);

void main(){
		int var=2,num;
		for(int i=1; i<=9 ; i++){
				num=1;
				for(int j=1; j< var; j++){
							
						printf(" %d ",num++);
					
				}
			 		
		if(i<5)
                       var++;
                 else
                      var--;
		
		printf("\n");
		}
}

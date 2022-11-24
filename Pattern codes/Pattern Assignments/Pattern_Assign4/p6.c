int printf(const char*,...);

void main(){
		int a=5,c=7,b=7;	
		for(int i=1; i<=7 ; i++) {
				if(i <=4){
					for(int j=1; j<=7; j++){
						
							if(j >= a)
								break;
								
							if(i+j >= 5){
								if(j%2==0)
									printf("#  ");	
								else
								printf("*  ");
							}

							else
								printf("   ");
							

							
					}
					a++;
				}
				else{
					
					for(int j=1;j<c ;j++){
						
										
							 if( (i+j) >= b){
								if(j%2==0)
								 	printf("#  ");	
								else
								printf("*  ");
							}
					
							else
								printf("   ");	

					}
				b +=2;
				c--;
				}
				
			printf("\n");
		}
}


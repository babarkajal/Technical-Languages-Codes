int printf(const char*,...);

void main(){
		int a=5,c=7,b=7;
		char num;	
		for(int i=1; i<=7 ; i++) {
				if(i <=4){
					for(int j=1,num='D'; j<=7; j++){
						
							if(j >= a)
								break;
							
							if(i+j >= 5)
								printf("%c  ",num);
						
							else
								printf("   ");

							if(j<4)
								num--;
							else
								++num;
				}
					
					a++;
				}
				
				else{
					
					for(int j=1,num='D'; j<c ; j++){
							
							if( (i+j) >= b)
								printf("%c  ",num);
							else	
								printf("   ");
							
						
							if(j<4)
								num--;
							else
								++num;
							
		
					}
				b +=2;
				c--;
				}
				
			printf("\n");
		}
}


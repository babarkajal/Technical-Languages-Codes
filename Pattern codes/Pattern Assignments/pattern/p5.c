int printf(const char*,...);

void main(){
		int a=5,c=7,b=7;	
		for(int i=1; i<=7 ; i++) {
				if(i <=4){
					for(int j=1,num=1; j<=7; j++){
						
							if(j >= a)
								break;
							if(j==4)
								printf("#  ");	
							else if(i+j >= 5)
								printf("*  ");
						
							else
								printf("   ");
					}
					a++;
				}
				else{
					
					for(int j=1,num=1;j<c ;j++){
						
							if(j==4)
								printf("#  ");	
							
							else if( (i+j) >= b)
								printf("*  ");
							else	
								printf("   ");
					}
				b +=2;
				c--;
				}
				
			printf("\n");
		}
}


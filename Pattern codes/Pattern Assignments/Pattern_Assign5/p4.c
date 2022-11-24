int printf(const char*,...);

void main(){
		int var=7;
		for(int i=1; i <=7 ; i++){
				
				for(int j=1; j<=4; j++){
	
					if(i <=4){
						if(i+j>4)
							printf("* ");
						else
							printf("  ");
					}
					else{
						if(i+j >= var)
							printf("* ");
						else	
							printf("  ");
					}
				    
				}
			if(i > 4)
				var+=2;
			printf("\n");
		}
}
				

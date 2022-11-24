int printf(const char*,...);
int scanf(const char*,...);

void main(){
		
		int var;
	
		var=5;//for end portion
		int num=1;
			
		//char printing
		char ch='A';
		

		for(int i=1 ;i<=9 ;i++)	{
				for(int j=1; j<=var ; j++){
					
					
					if(i <= 5){
						if(i+j > 5 && (i+j)%2 == 0)
							printf(" %c ",ch);
						else
							printf("   ");
					}
					
					else{
						 
						if(j>num && (i+j)%2 ==0 )
							printf(" %c ",ch);
					else
							printf("   ");
					}

				}
				
				if(i< 5){
					var++,ch++;
				}
				else{
					var--,ch--;
				}	

				if(i>5)
					num++;
				
				printf("\n");
			}
}

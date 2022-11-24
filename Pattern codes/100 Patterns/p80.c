int printf(const char*,...);
int scanf(const char*,...);

void main(){
		
		int var;
	
		var=5;//for end portion
		int num=1;

		//char printing
		char ch1,ch2;
		ch1=ch2='A';
		

		for(int i=1 ;i<=9 ;i++)	{
				
				
				ch1='A';
				for(int j=1; j<=var ; j++){
					
					
					if(i <= 5){
						if(i+j > 5 && (i+j)%2 == 0)
							printf(" %c ",ch1++);
						else
							printf("   ");
					}
					
					else{
						
						if(j>num && (i+j)%2 ==0 )
							printf(" %c ",num+(ch2++));
					else
							printf("   ");
					
					
					}

				}
				
				if(i< 5){
					var++;
				}
				else{
					var--;
				}	

				if(i>5)
					num++,ch2='A';
					
				
				printf("\n");
			}
}

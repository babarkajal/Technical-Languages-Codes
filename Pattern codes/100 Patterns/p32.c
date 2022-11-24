int printf(const  char*,...);
int scanf(const  char*,...);



void main(){

		int j=0;
		char a='E';
 
		for(int i=1 ; i<=5; i++){
				
			if(i > j)
				printf(" %c ",a);
			else
				printf("   ");
			
			if(i==5 && j < 4){
				printf("\n");
				i=0;
				a--;
				j++;
			}
		}
		printf("\n");
	
}
						

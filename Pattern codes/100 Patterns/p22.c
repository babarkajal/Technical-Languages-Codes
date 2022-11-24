int printf(const char*,...);
int scanf(const char*,...);

void main(){
	
	
	int j=5;//To stop 
	
	char a='E';//to print character

	for(int i=1; i<=5 ; i++){
		if(i<=j)
		{
			printf("%c ",a);
			
		}
//print next line and reset the i
		if(i==j){
			a--;
			i=0;
			j--;
			printf("\n");
		}	
		
	}
		
}

			
				
				

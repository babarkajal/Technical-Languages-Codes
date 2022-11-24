int printf(const char*,...);

void main(){
	int j,a=1;
	for(int i=1;i<=5;i++){
			
		if(i<=3){
			for(j=3;j >=i;j--){

				printf("* ");
			}
		}
			
		else {

			for( j=2;j<i;j++){
				
				printf("* ");
			     
			}
		}

	      printf("\n");
	}

}

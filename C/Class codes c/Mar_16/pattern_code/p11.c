int printf(const char*,...);

void main(){
	int j;
	for(int i=1;i<=4;i++){

			for(j=3;j>=i;j--){

				printf("= ");
			}
			for(int k=1;k<=j;k++){
				printf("* ");
			}
	      printf("\n");
	}

}

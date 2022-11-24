int printf(const char*,...);

void main(){
	int j,a=1;
	for(int i=1;i<=3;i++){

			for(j=3;j > i;j--){

				printf("  ");
			}

			for(int k=1;k<=j;k++,a=a+2){
				
				printf("%d ",a);
			     
			}

	      printf("\n");
	}

}

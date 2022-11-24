int printf(const char*,...);

void main(){
	int j;
	for(int i=1;i<=4;i++){

			for(j=1;j<=4;j++){
				if( (j==1 || j==4 ) && (i==1 || i==4) )
					printf("= ");
				else
					printf("* ");
				
			}

	printf("\n");
	}

}

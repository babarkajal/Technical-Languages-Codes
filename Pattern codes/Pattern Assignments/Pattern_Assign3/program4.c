int printf(const char*,...);

void main(){
		int a=7;
		for(int i=1,b=1 ; i<=4; i++,b=i) {

					for(int j=1 ; j<= a; j++){
					
						if(j >=i)
							printf("%d ",b++);
						else
							printf("  ");
					}
		a--;
		printf("\n");
		}
}
										

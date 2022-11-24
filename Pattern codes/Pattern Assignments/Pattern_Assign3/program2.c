int printf(const char*,...);

void main(){
		int a=7;
		for(int i=1;i<=4;i++){
					for(int j=1;j<= a;j++){
						//if(j<a&& i< 4)
						//	break;

						if(j >=i)
							printf("* ");
						else
							printf("  ");
					}
		a--;
		printf("\n");
		}
}
										

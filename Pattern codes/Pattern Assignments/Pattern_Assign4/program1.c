int printf(const char*,...);

void main(){
		int count=0;
		for(int i=1,j=3; i<=6 ; i++,count++){
			
			
			if(count==6)
				break;
			printf("* ");

			if(i==j){
				printf("\n");
				j--;
				i=0;
			}
		}

}

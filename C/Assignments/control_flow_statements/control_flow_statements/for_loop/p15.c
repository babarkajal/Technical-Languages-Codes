int printf(const char*,...);
int scanf(const char*,...);

void main(){
		printf("NOs divisible by 4 ranging from 30-60\n");
		for(int i=30; i<=60 ; i++) {		

					if(i%4==0){     //divisible by 4
							printf("%d  ",i);
					}
		}
	printf("\n\n");
}

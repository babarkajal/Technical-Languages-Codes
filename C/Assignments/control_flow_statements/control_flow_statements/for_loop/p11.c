int printf(const char*,...);
int scanf(const char*,...);

void main(){
	 	int var1,var2;
		printf("Enter 2 numbers: ");
		scanf("%d %d",&var1,&var2);
		printf("The even numbers lie between %d and %d: \n",var1,var2);

		for(int i=var1 ; i<=var2 ; i++){		
					if( i%2==0){
						printf("%d ",i);
					}
		}
	printf("\n");

}


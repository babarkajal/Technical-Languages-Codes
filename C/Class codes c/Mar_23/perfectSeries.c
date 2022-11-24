int printf(const char*,...);
int scanf(const char*,...);

void  main(){
		int num;
		printf("Enter the limit for series: ");
		scanf("%d",&num);

		printf("Series of perfect number bet 1 and %d\n",num);

		int addDiv,flag=0;

		for(int i=1;i<=num;i++){
			addDiv=0;
			for(int j=1;j < i;j++){
					if(i%j==0)
						addDiv +=j;
				
			}
			if(i==addDiv){
				printf("%d\n",i);
				flag=1;
			}
		}
		if(flag==0)
			printf("NO PERFECT NUMBER IS PRESENT IN THIS RANGE\n");

}

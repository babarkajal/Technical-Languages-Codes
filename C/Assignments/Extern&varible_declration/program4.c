int printf(const char*,...);

void series_of_oddnumbers() {
		int i;
		printf("\n List of odd numbers from 1-20:  ");
		for(i=1;i<=20;i++) {
				if(i%2==1)
					printf("%d\t",i);
 		}
printf("\n\n");
}

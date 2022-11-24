#include<stdio.h>

void main(){
	
	char country[15]="United Kingdom";
	printf("\n123456789012345\n");	
	printf("%15s\n\n",country);//print all string

	printf("%10.3s\n\n",country);//print 3 char upto 10 fields initial char are blank

	printf("%5s\n\n",country);//print all

	printf("%15.6s\n\n",country);//print 6 char upto 6 field width

	printf("%-15.6s\n\n",country);//print 6 from starting 
	
	printf("%15.0s\n\n" ,country);//print nothing
		
	printf("%.3s\n\n",country);//print only 3 from start
	

}
	

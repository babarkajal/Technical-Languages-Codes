#include<stdio.h>

void main(){
	int year=2000;
	printf("leap year ranging between 2000 to 2050\n");
	while(year<=2050){
		if( (year %4==0 && year%100!=0)||(year%400==0) )
			printf("%d\n",year);
		year++;
	}
}

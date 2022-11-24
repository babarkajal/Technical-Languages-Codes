/*
Program 5: Write a Program which accepts date month and year from user and
checks for the validity of date according to month.
Input : 30/02/2018
Output : Date doesn’t exists!!..
*/


#include <stdio.h>

void main() {
	//var to holds the value of year,month and days
	int month,days,year;

	//to hold value returned by scanf
	int valid;

	/*do-while to check the conditions
	 * condition 1:- date is entered correct or not
	 * condition 2:- date should be greater than 0
	 */
	
	do {
		fflush(stdin);
		printf("Enter date:(format dd/mm/yyyy): ");
		valid = scanf("%d/%d/%d",&days, &month,&year);

		if(valid !=3 || days <=0 || month <= 0 || year<=0 )  {
			printf("Invalid date!!! Enter valid date as per given format\n");
		}
		if(month > 12 )
			printf("Invalid month!!! month rnage is 1-12\n");

	}while(valid < 3 || days <=0 || month <= 0|| year<=0 || month > 12);


	if(month < 8 && month != 2 ) {
		if(month%2 != 0 && days <= 31)
			printf("Entered Date is valid!!!\n");
		else if(days<= 30)
			printf("Entered Date is valid!!!\n");
	}

	else if(month >=8 && month != 2) {
		if(month%2 == 0 || days <=31) 	
			printf("Entered Date is valid!!!\n");
		else if(days <= 30)
			printf("Entered Date is valid!!!\n");
	}
	else if(month==2){
		
		if(year%4==0){
			if(year%100==0 && year%400!=0 && days <=28)
				printf("Entered Date is valid!!!\n");
			else if(days <=29)
				printf("Entered Date is valid!!!\n");
				
		}else{
			if(days <= 28) 
				printf("Entered Date is valid!!!\n");
		}
	}
	else 
		printf("Entered Date is invalid!!!\n");


}


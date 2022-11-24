#include <stdio.h>
void calender(int ,int ,int);

void main(){
	
	printf("\nTo find whether the date is valid or not.\n");	
	int year,month,date;

	printf("\nEnter the date(date/month/year):  ");
	int i=scanf("%d/%d/%d",&date,&month,&year);
	while(i!=3){
		
		printf("\n!!!Invalid date entered.Try again!!!\n");
		printf("\nEnter the date(date/month/year):  ");
		i=scanf("%d/%d/%d",&date,&month,&year);
	}
	
	//fun pointer
	void (*funPtr)(int ,int ,int)=calender;
	//call fun
	funPtr(date,month,year);
}


void calender(int date,int month, int year ){
			
			int flag=0;
			
			//For the month which having 31 days
			if( (month %2 !=0 || month==8) && (date <=31) )
							//set flag
							flag=1;

			//For the month Feb (leap year and non leap year)
			else if(month==2 && (date<=29 && year%4==0)  ||  (date<=28 && year%4!=0 )){

						flag=1;
			}
			
			//for the month having 30 days
			else if( (month%2==0 && date<=30) && month!=2)		
						flag=1;		

			//flags set for valid
			if(flag==1)
				printf("\nDate is valid!!!!!\n\n");
			else
				printf("\nDate is not valid!!!!!\n\n");
}

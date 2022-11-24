
#include<stdio.h>
#include<stdlib.h>

struct date{
	int day;
	int month,year;
};

int computDiff(struct date d1 ,struct date d2);
int oneMonthDiff(struct date d1 ,struct date d2);
int MonthDiff(struct date d1 ,struct date d2);

void main(){
	struct date d1,d2;
	//enter first date

	printf("Enter the first date(dd/mm/yyyy): ");

	int i = scanf("%d/%d/%d",&d1.day ,&d1.month, &d1.year);
	
	//test case
	while(i<3 || d1.month > 12){
		printf("\nInvalid date entered,Try again!!!\n");
		printf("Enter the first date(dd/mm/yyyy): ");
		i = scanf("%d/%d/%d",&d1.day ,&d1.month,&d1.year);
	}
		
	//enter second date
	printf("Enter the second date(dd/mm/yyyy): ");
 	i = scanf("%d/%d/%d",&d2.day ,&d2.month, &d2.year);
	
	//test case
	while(i<3 || d2.month > 12){
		printf("\nInvalid date entered,Try again!!!\n");
		printf("Enter the second date(dd/mm/yyyy): ");
		i = scanf("%d/%d/%d",&d2.day ,&d2.month, &d2.year);
	}
	
	
	int diff= computDiff(d1,d2);
	printf("Diference between dates: %d\n\n",diff);
		
}


int computDiff(struct date d1 ,struct date d2){
		int diff;
		
		printf("Date %d/%d/%d\n",d1.day,d1.month,d1.year);
		printf("Date %d/%d/%d\n",d2.day,d2.month,d2.year);
		
		if(d1.year != d2.year)
				exit(0);

		if(d1.month == d2.month)
				diff=d2.day-d1.day;
		
		//if month difference is 1  
		if(d1.month < d2.month && d2.month-d1.month==1)
			diff=oneMonthDiff(d1,d2);

		//if month difference is > 1 
		if(d1.month < d2.month && d2.month-d1.month > 1)
			diff=MonthDiff(d1,d2);

return diff;

}

int oneMonthDiff(struct date d1, struct date d2){
		int diff=0;
			 if( d1.month==4 || d1.month==6 ||  d1.month==9 || d1.month==11){
					
						diff=30-d1.day + d2.day;
				}	
			 else if( d1.month==1 || d1.month==3 ||d1.month==5||d1.month==7 || d1.month==8 ||d1.month==10|| d1.month==12 ){
						diff=31-d1.day + d2.day;
				}

			else if(d1.month==2 ){
					//for leap year
					if( (d1.year%4==0 && d1.year%100 !=0) || (d1.year%400==0))
						diff=29-d1.day + d2.day;
					else
			
						diff=28-d1.day + d2.day;
					
				}
return diff;	
}

//month diff is > 1
int MonthDiff(struct date d1,struct date d2){
		
		int diff=0;
		int temp = d1.month + 1;
			
			while(temp < d2.month){
				if(temp==4 || temp==6 || temp==9 || temp==11)
						diff=diff+30;
					
				 else if(temp==1||temp==3 ||temp==5||temp==7||temp==8||temp==10||temp==12 )
						diff=diff+31;

				else if(temp==2 ){
					//for leap year
					if( (d1.year%4==0 && d1.year%100 !=0) || (d1.year%400==0))
						diff=diff+29;
					else
			
						diff=diff+28;
				}
				temp++;
			}
			
 			 if( d1.month==4||d1.month==6||d1.month==9||d1.month==11)
					
						diff=diff+(30-d1.day)+ d2.day;
			 
			else if( d1.month==1||d1.month==3||d1.month==5||d1.month==7 ||d1.month==8||d1.month==10||d1.month==12 )
						diff=diff+(31-d1.day) + d2.day;
			
			else if(d1.month==2 ){
					if( (d1.year%4==0 && d1.year%100 !=0) || (d1.year%400==0))
						diff=diff+(29-d1.day)+d2.day;
					else
			
						diff=diff+(28-d1.day)+d2.day;
			}
	return diff;
}





//write a program to accept date and print it in format "month day,year" .check whether the date is valid or not .update the date 
// increment by 1 and print it


#include <stdio.h>

struct date{
		int day;
		int month;
		int year;
};

struct date getdata(){
		struct date d1;
		int i;
		do{
			printf("\nEnter the date(dd/mm/yy): ");
			 i = scanf("%d/%d/%d",&d1.day ,&d1.month, &d1.year);	//to check the enterd format is correct or not
		} while(i<3 || d1.month > 12);

		return d1;//return object	

}

//validate the datei
int validate(struct date d){
			
		
			if(d.month==4 || d.month ==6 || d.month ==9 || d.month==11){
				if(d.day <= 30)
					return 1;
				else 
					return 0;
			}
			else if(d.month==2){
				if(d.year%4==0 && d.day<=29)
					return 1;
				else if(d.year%4 !=0 && d.day<=28)
					return 1;
				else return 0;
				}
			else if(d.month==1 || d.month ==3 || d.month ==5 || d.month==7 || d.month==8 || d.month==10 || d.month==12){
				if(d.day <= 31)
					return 1;
				else 
					return 0;
			}
			else
				return 0;		
							
}

struct date update(struct date d){

			//increment the day
			d.day++;

			if(d.month==4 || d.month ==6 || d.month ==9 || d.month==11){
					if(d.day > 30){
						d.day=1;//if day excced than 30  month days
						d.month++;//inc month
						
						//check the month is more than 12 then inc year and set month=1
						if(d.month > 12)
							d.month=1, d.year++;  // 0 for jan
					}
			}
			else if(d.month==2){

				//for leap year
				if(d.year%4==0 && d.day > 29){
						d.day=1;//if day excced than 30  month days
						d.month++;//inc month
				}
				//for non leap year	
				else if(d.year%4 !=0 && d.day > 28){
						d.day=1;//if day excced than 30  month days
						d.month++;//inc month
				}
					
			}
			else if(d.month==1 || d.month ==3 || d.month ==5 || d.month==7 || d.month==8 || d.month==10 || d.month==12){
				if(d.day > 31){
						d.day=1;//if day excced than 30  month days
						d.month++;//inc month
				}
				//check for month
				if(d.month > 12){
					d.month=1;	
					d.year++;
				}
			}

	//return updated date
	return d; 
}

//print date
void print(struct date d){
			char arr[12][15]={"Januvary","February","March","April","May","Jun","July","August","Sep","Oct","Nov","Dec"};
			printf("\n%s %d , %d\n\n",arr[d.month-1],d.day, d.year);
}


int  main(){
		struct date D= getdata();
		printf("Entered date :  ");	
		print(D);
		
		//check for valid date
		int i=validate(D);
		printf("\ncheck valid or not: \n");
		if(i==1){
			printf("Entered date is valid.\n\n");
		}
		else{
			printf("Entered date is not valid.\n\n");
			return 0;
		}
		//check for update
			printf("\nUpdated date:  " );
			struct date updated = update(D);
			print(updated);
		
}

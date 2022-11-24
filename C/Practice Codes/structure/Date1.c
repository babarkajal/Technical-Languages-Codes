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
			printf("\nEnter the date(day/month/year): ");
			 i = scanf("%d/%d/%d",&d1.day ,&d1.month, &d1.year);	//to check the enterd format is correct or not
		}while(i<3 || d1.month > 12);

		return d1;//return object	

}

//validate the datei
int validate(struct date d){
			
			if(d.month>12)
				return 0;
			
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

void print(struct date d){
		char arr[12][15]={"Januvary","February","March","April","May","Jun","July","August","Sep","Oct","Nov","Dec"};
		
			printf("\n%s %d , %d\n\n",arr[d.month-1],d.day, d.year);
}

void main(){
		struct date D= getdata();
		int i=validate(D);
		printf("Entered data :  ");	
		print(D);
		if(i==1){
			printf("Entered date is valid.\n\n");
		}
		else
			printf("Entered date is invalid.\n\n");
			
}

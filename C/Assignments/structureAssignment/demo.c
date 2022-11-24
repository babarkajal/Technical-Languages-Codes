#include<stdio.h>
struct date{
	int day,month,year;
};

void main(){
	struct date d1={10,7,2019};
	struct date d2={13,10,2019};
	
	int temp1=d1.month+1,temp2=d2.month;
	
	
	
	int diff=0;

	if(temp1==1||temp1==3||temp1==5||temp1==7||temp1==8||temp1==10||temp1==12){
		diff=31-d1.day;
		}
	else if(temp1==4||temp1==6||temp1==9||temp1==11){
		diff=30-d1.day;
	}
	
//	printf("%ld\n",diff);
	while(temp1 < temp2){
		if(temp1==1||temp1==3||temp1==5||temp1==7||temp1==8||temp1==10||temp1==12){
		diff=diff+31;
		}
		else if(temp1==4||temp1==6||temp1==9||temp1==11){
		diff=diff+30;
	
		
	}
	temp1++;
	}

	diff=diff+d2.day;
	printf("Diffenrence=%d\n",diff);
}	

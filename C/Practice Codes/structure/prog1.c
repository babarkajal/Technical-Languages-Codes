#include<stdio.h>
struct time{
	int hr,min,sec;

};

struct time update(struct time T);
void main(){

	struct time Time1={13,45,59},Time2;
	printf("Before updation:\n");
	printf("%d : %d : %d\n\n",Time1.hr ,  Time1.min ,Time1.sec);
	Time2=update(Time1);
	printf("After updation:\n");
	printf("%.2d : %.2d : %.2d\n\n",Time2.hr ,  Time2.min ,Time2.sec);
}

struct time update(struct time T){
	
	T.sec++;

	if(T.sec==60)
		T.sec=0,T.min +=1;
	if(T.min==60)
		T.min=0,T.hr +=1;
	if(T.hr==24)
		T.min=T.hr=T.sec=0;
	
return T;
}
	
			

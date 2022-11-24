//print series 10.0 ,9.5 ,9.0,8.5,8.0

#include<stdio.h>

void main(){
	float f=10;
	while(f > 0.5){
		printf("%.1f\t",f);
		f=f-0.5;
	}
	printf("\n\n");
}

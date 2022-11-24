#include<stdio.h>

int main() {
	int year;
	printf("Input : ");
	scanf("%d", &year);
	year>0 && year%100==0 ? year%400==0 ? printf("Leap year") : printf("Not leap year") : year>0 && year%4==0 ? printf("Leap year") : printf("Not a leap year");
	return 0;
}

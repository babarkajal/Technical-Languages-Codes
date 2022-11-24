/*Write a program to print days of the months using month name (Note: Use enum)
e.g after printing 
    Jan output should be 31
    Feb output Should be 29
   etc
*/

#include <stdio.h>

//enum defination
enum Month {
	jan = 31, 
	feb = 29, 
	mar = 31, 
	apr = 30, 
	may = 31, 
	jun=30, 
	jul = 31, 
	aug =31, 
	sep = 30,
	oct = 31,
	nov = 30, 
	dec = 31
};

void main(){
	printf("---------- Months and days Using Enum ---------\n");
	printf("January = %d\n", jan);	
	printf("February = %d\n", feb);	
	printf("March = %d\n", mar);	
	printf("April = %d\n", apr);	
	printf("May = %d\n", may);	
	printf("June = %d\n", jun);	
	printf("July = %d\n", jul);	
	printf("August = %d\n", aug);	
	printf("Sepember = %d\n", sep);	
	printf("Octeber = %d\n", oct);	
	printf("November = %d\n", nov);	
	printf("December = %d\n", dec);	
}
	

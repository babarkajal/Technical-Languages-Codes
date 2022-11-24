/*
 * Program 5: Write a Program to take marks of five subjects Physics, Chemistry,
Biology, Mathematics and Computer. Calculate percentage and grade
according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*
*/

#include <stdio.h>

void main() {
	//to take marks
	int marks[5];
	int sum =0;
	float per;

	printf("Enter marks of 5 subject(Out of 100): ");
	for(int i=0 ;i<5; i++) {
		scanf("%d",&marks[i]);
		sum += marks[i];
	 }
	per = sum / 500.00 *100;


	if(per >= 90)
		printf("Percentage %f: Grade A\n",per);
	else if(per >=80 )
		printf("Percentage %f: Grade B\n",per);
	else if(per >=70 )
		printf("Percentage %f: Grade C\n",per);
	else if(per >=60 )
		printf("Percentage %f: Grade D\n",per);
	else if(per >=40 )
		printf("Percentage %f: Grade E\n",per);
	else
		printf("Percentage %f: Grade F\n",per);


}

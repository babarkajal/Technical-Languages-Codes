/*
Program 5: Write a Program to take marks of five subjects Physics, Chemistry,
Biology, Mathematics and Computer. Calculate percentage and grade
according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F

*/

#include<stdio.h>

void main(){
	
	float phy,chem,bio,math,comp;
	printf("Enter the marks of 5 subjects(phy,chem,bio,math,com)  : ");
	scanf("%f%f%f%f%f",&phy,&chem,&bio,&math,&comp);
	
	float percent = ((phy+chem+bio+math+comp)/500)*100; // 500 marks overall 100 marks each paper
	
	//printf("%f",percent);

	if(percent>=90)
		printf("Grade A");
	else if(percent>=80)
		printf("Grade B");
	else if(percent>=70)
		printf("Grade C");
	else if(percent>=60)
		printf("Grade D");
	else if(percent>=40)
		printf("Grade E");
	else if(percent<40)
		printf("Grade f");		
	

}	

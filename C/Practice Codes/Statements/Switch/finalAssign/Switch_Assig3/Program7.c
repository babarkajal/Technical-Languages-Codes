/*Q7
 Write a program in c in which students should enter marks of 5 different subjects. If all subject having above passing marks add them and provide to switch case to print grades(first class second class), if student get fail in any subject program should print “You failed in exam”

 */


#include<stdio.h>

void main()  {

	int marathi,hindi,english,maths,science;

	//we have to get marks of 5 sub from user.
	//
	printf("Enter marks of 5 subjects: ");
	scanf("%d%d%d%d%d",&marathi,&hindi,&english,&maths,&science);

	//if all sub having passing marks then and then we decide the grade 
	//for this we need to check all sub marks are greater than 35 so we can use if else statement 
	//in this if all  sub marks are greater than 35 then if will be execute otherwise it will go to else statment.
	
	if(marathi>=35 && hindi>=36 && english>=35 && maths>=35 && science>=35)  {

		//to decide the student got witch grade we have to calculate the %.

		int per=(marathi+hindi+english+maths+science)/5;
		char grade;

		if(per>=75)
			grade='A';
		else if(per>=60 && per<75)
			grade='B';
		else if(per>=50 && per<60)
			grade='C';
		else 
			grade='D';

		switch(grade)  {

			case 'A':
				printf("Distinction\n");
				break;
			case 'B':
				printf("First Class\n");
				break;
			case 'C':
				printf("Second Class\n");
				break;
			case 'D':
				printf("Pass\n");
				break;
		}
	}
	else  {

		printf("You faild in exam\n");
	}
}

	

/*Write a program to get Id of student using getId function. Id should be start from 100 and autoincremented using static variable.
 call function for  3-4 students and explain behaviour of static variables
 */

#include <stdio.h>

//function to get Id's for student
int getId() {
	static int id = 100;
	return id++;	
}

void main() {
	//create variables for students Ids
	int id1 , id2, id3;
	id1 = getId();
	id2 = getId();
	id3 = getId();
	printf("ID Numbers of students: \n");
	printf("Student1: %d\n", id1);
	printf("Student2: %d\n", id2);
	printf("Student3: %d\n", id3);
}

/*
 * We cannot create object of Abstract class because definaion of class is incomplete and if we created object then it will be errornious situtaion
 */

abstract class Assignment {
	abstract void write();		
}

class Teacher {
	Assignment a = new Assignment();	//error: Assignment is abstract; cannot be instantiated 
}
 



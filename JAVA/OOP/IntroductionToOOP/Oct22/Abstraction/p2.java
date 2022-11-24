/*
 * 			Abstarct methods
 */

class Assignment {
	abstract void write();		//error: missing method body or declare abstract
}

//here student class inherits Assignment class but does not override the write method 
class Student extends Assignment {
	
}

/* this is an error
 *  Assignment is not abstract and does not override abstract method write() in Assignment
 *  class Assignment {
 *  ^ 
 */

 /* solution: 
  * Class should be declared as abstract or write body for inherited abstract method
  */



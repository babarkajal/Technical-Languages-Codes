/*
 * 			Abstarct methods
 *	the method has no body then it is considered as Abstract method 
 *	If there is 1 or more than 1 astract methods then declare that class as abstract class 
 *	otherwise there will be an error 
 */

class Assignment {
	abstract void write();		//error: missing method body or declare abstract
}
/* error: 
 *  Assignment is not abstract and does not override abstract method write() in Assignment
class Assignment {
^
*/

 



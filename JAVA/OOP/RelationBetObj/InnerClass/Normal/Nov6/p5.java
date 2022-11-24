/*
 * 		--------------- this$0 ----------------
 * this$0 is the member of non-static inner class which is used to refer the object on which the class is invoked
 *
 */

class Outer {
	class Inner1 {
		class Inner2 {
			class Inner3 {
			}
		}
	}


	//In these two classes, one member added at run time that is this$0 and this$1 which will point to the Outer class object
	/*
	 *	In Inner1 this$0 will refer to the Outer class
	 *	In Inner2 this$0 will refer to the Outer$Inner1 class
	 *
	 * 	outer class ----------> Outer
	 * 		inner class --------> Inner1
	 * 			inner class ----> Inner2
	 *
	 * 	So in this case this$0 and this$1 are used because both classes are not at same level
	 */ 
}

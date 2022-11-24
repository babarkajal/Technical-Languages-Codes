/*
 * 		--------------- this$0 ----------------
 * this$0 is the member of non-static inner class which is used to refer the object on which the class is invoked
 */

class Outer {
	class Inner2 {

	}
	class Inner1 {
	}


	//In these two classes one members added at run time that is this$0 which will point to the Outer's object
	
	/*
	 * 	outer class ----------> Outer
	 * 	inner classes --------> Inner2 , Inner1 
	 *
	 * 	So in this case this$0 is used because both classes are at same level
	 */ 
}

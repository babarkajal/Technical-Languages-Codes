/*
 * 		--------------- this$0 ----------------
 *			 It is added at run time
 */

class Outer {
	int x = 10;
	class Inner1 {
		int x;
		void fun() {
			System.out.println("Inner X = "+ this.x);	
			System.out.println("Outers X = "+ this$0.x);	
			
			/* here as we can access Inner1's variable using this then why we cann't use this$0.x
			 *
			 * when we call non-static method then hidden parameter 'this' is passed that is ref of caller object 
			 * but this$0 is added at run time it is not present at compile time that' why complier raise an error and 
			 *     this$x here x represents the level of inner class eg 0,1,2,3
			 *     so it is not fixed that's why complier dont know this
			 */
		}
	}


}

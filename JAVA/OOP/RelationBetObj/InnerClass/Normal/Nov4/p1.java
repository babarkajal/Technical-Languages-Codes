/*
 * 	Template of inner and outer class
 */

class Outer {
	
	/*		--bytecode of Outer ---
	 * class Outer {
  	Outer();
    	Code:
		0: aload_0
       		1: invokespecial #1                  // Method java/lang/Object."<init>":()V
       		4: return
	}
	*/

	
	//this is inner class and it contains this$0 to store reference of the object on which Inner class is called
	class Inner {
		

	}
	/*
	 * 		--- bytecode of Inner ---
	 * class Outer$Inner {
  			final Outer this$0;

  			Outer$Inner(Outer);
    			Code:
       			0: aload_0
       			1: aload_1
       			2: putfield      #1                  // Field this$0:LOuter;
       			5: aload_0
       			6: invokespecial #2                  // Method java/lang/Object."<init>":()V
       			9: return
	}
	*/
	
}

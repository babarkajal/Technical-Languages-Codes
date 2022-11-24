//for loop
//Syntax:
//		1		2	4
//	for(initilization; condition; inc/dec) {
//			body			--> 3
//	}         
//		   T
// flow is 1 --> 2---> 3 -> 4 --if condtion 2 gets false then out of the loop 
// 		 ^ 	   |
// 		 |_________|
// 		    

/*
 * 	*  
 * 	*  
 * 	*  
 * 	*  
 */
class ForDemo {
	public static void main(String[] args) {
		for(int i=1; i<=4; i++) {
			System.out.println("* ");
		}	
	}
}

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
 * 	2 
 * 	4 
 * 	6  
 * 	8
 * 	10
 * 	12
 * 	..18  
 */

//print even num from 1-20
class ForDemo {
	public static void main(String[] args) {
		for(int i=1; i<=20; i++) {
			if(i%2==0)
				System.out.println(i);
		}	
	}
}

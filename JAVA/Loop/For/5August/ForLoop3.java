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


//print  num from 1-100 which are divisible by 4 and 12
class ForDemo {
	public static void main(String[] args) {
		System.out.println("4 and 12 divisible num from 1-100");
		for(int i=1; i<=100; i++) {
			if(i%4==0 && i%12 ==0)
				System.out.println(i);
		}	
	}
}

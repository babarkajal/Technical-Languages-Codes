//break is used to stop the loop iteration
class ContinueDemo {
	public static void main(String[] args) {
			int i;
			for(i=1; i<=50; ) {
				if(i%7 ==0 || i%5==0) { 
					 
				         continue;			
					 System.out.println(i);	//unreachable statement	
				}
				i++;
			}

			if(i%2==0){
				continue;			//error
			}
			System.out.println("Out of loop");
	}
	
}
//break and continue should be the last statament in the loop or block 
/*
 * ContinueError.java:8: error: unreachable statement
					System.out.println(i);
					^
1 error
*/

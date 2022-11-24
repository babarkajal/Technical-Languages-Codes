class Program {
        public static void main(String[] args) {
                int a;	//What if it is not initilized
		boolean con = false;
	
		if(con) {

			a= 10;	
			/* here a is initilized but in if block 
			 * if condition is true then only this block will get exeecuted
			 * here varible con is used and compiler don't know the value of con so there might be some chances that varible a cannot be
			 * initlized
			 */
		}
		//if there is else block for is and in else variable is initlized then there will be no any compile time error
		else {
			a = 20;
		}
		

                System.out.println(a);  
        }
}

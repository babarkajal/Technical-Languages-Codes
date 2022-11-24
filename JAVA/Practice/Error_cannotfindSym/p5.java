class Program {
        public static void main(String[] args) {
                int a;	//What if it is not initilized
		boolean con = true;
	
		if(con) {

			a= 10;	
			/* here a is initilized but in if block 
			 * if condition is true then only this block will get exeecuted
			 * here varible con is used and compiler don't know the value of con so there might be some chances that varible a cannot be
			 * initlized
			 * compiler raise an error
			 */
		}
		

                System.out.println(a);  
        }
}

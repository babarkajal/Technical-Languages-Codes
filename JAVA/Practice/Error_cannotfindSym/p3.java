class Program {
        public static void main(String[] args) {
                int a;	//What if it is not initilized
		/* 
		 * In c language, printing the non-initilized value gives any random value i.e. garbage value
		 * This was the problem. So java overcomed this one 
		 * Java forces the programmer to initilize the local variables otherwise it throws an error 
		 */


		{
			a= 10;	
			/* here a is initilized but in seprate block 
			 * this block get exceuted unconditionally
			 */
		}

                System.out.println(a);  
        }
}

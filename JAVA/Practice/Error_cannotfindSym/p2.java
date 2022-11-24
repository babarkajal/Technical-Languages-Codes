class Program {
        public static void main(String[] args) {
                int a;	//What it is not initilized
		/* 
		 * In c language, printing the non-initilized value gives any random value i.e. garbage value
		 * This was the problem. So java overcomed this one 
		 * Java forces the programmer to initilize the local variables otherwise it throws an error 
		 */
                System.out.println(a);  //Error
               /* varible a might not have been initlized */	
        }
}

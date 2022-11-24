class CommandLineDemo {
		public static void main(String args[]) {
				System.out.println("args.length = " + args.length);			//print length of the aruments
				
				//suppose user entered character from command line
				//System.out.println("Character = "+(char)args[0]);			//this will give error .we are tring to convert string to char
				System.out.println("Character : " + args[0].charAt(0));

				
		}
}
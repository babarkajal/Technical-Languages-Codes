class CommadnLineDemo {
		public static void main(String args[]) {
				System.out.println("args.length = " + args.length);			//print length of the aruments
				for (int i=0; i< args.length; i++) {						//traverse through that array and print each value
						System.out.println("Args["+ i+ "] = " + args[i]);
					}
		}
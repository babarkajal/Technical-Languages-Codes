// Double default case
class SwitchDemo {
	public static void main(String[] args ) {
		switch(10) {
				case 1: 
					System.out.println("Hii");
					break;
				case 10: 
					System.out.println("Hello");
					break;
				default: 
					System.out.println("default");
					break;
				default: //as like other casees duplicate case is not allowed same for default 
					System.out.println("second default");
					break;
		}
	}
}

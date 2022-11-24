//nested switch means switch in switch
class NestedSwitch {
	public static void main(String[] agrs) {
		int floor = 2;
		System.out.println("------------ WELCOME --------------");
		System.out.print("Enjoy and YOu have selected  service : ");
		switch(floor) {
		      case 1: {
			char  ch ='F';		//s for shopping ,f  for food
		        switch(ch) {
				case 's':
				case 'S':
					System.out.println("Shopping");
					break;
				case 'f':
				case 'F':
					System.out.println("Food");
					break;
				default:
					System.out.println("Service is not availble on this floor");
					break;
			}
		    }//case 1 end
		    break;
	    	    case 2: {
				char ch = 'm'; //m for movie and  p for playstation
				switch(ch) {
					case 'm':
					case 'M':
						System.out.println("Dil bechara: movie");
						break;
					case 'p':
					case 'P':
						System.out.println("Football");
						break;
					default:
						System.out.println("Football");
						break;
				}
		    }//case 2 end
		    break;
		   default:
			System.out.println("You have selected wrong floor");	    
			break;
		}//..switch

	}//..main

}//..class

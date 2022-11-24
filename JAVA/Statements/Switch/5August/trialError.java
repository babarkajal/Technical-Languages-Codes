//nested switch means switch in switch
class NestedSwitch {
	public static void main(String[] agrs) {
		int floor = 2;
		switch(floor) {
			switch(10) {
				case 1:	System.out.println("Hello");
					break;
			}
		}//..switch

	}//..main

}//..class

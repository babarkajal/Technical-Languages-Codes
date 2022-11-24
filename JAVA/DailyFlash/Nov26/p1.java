/*
 * 	Write a ral time example for hierarchical inheritance on Indian festivals 
 *	
 * hierarchical inheritance:
 * 		Two or more classes inheritd from single parent
 */
 

class festivals {
	
	//commom method: enjoy 
	void enjoy() {
		System.out.println("Festival madhe apan sagle enjoy karto ");
		System.out.println("Natevaikanchi bhet gheto.Tyna subhecha deto");
	}
	
}

class Diwali extends festivals {
		Diwali() {
			System.out.println("----------- Diwali Festival--------------");
		}
		//ata common method enjoy h inherited ahech but apan diwali madhe apan faral banvto 
		void faral() {
			System.out. println("Diwali madhe faral banval jat");
			System.out.println("Ladu, Karanjya, Chakali, Chivada");
		}

}

class Ganpati extends festivals {
	Ganpati() {
		System.out.println("----------- Ganpati Festival--------------");
	}
	void decoration() {
		System.out.println("Ganesh chaturthi is one of the main and favourite festival in Hindu religion");
		System.out.println("For our lord Ganesha we decorate our home");
	}
}


class People {
	public static void main(String args[]) {
		festivals f = new festivals();	
		f.enjoy();

		Diwali d = new Diwali();
		d.enjoy();
		d.faral();
		
		Ganpati g = new Ganpati();
		g.decoration();
	}
}


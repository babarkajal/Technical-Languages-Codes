/*
 * 	Example for inner class 
 * 	IndianDefence and inner classes are army ,navy and airforce
 */

class IndianDefence {
	//constructor
	IndianDefence() {
		System.out.println("Mejor General Bipin Rawat");
	}
	
	//Inner class
	class Army {
		void attack() {
			System.out.println("URI attack");
		}
	}

	class Navy {
		void attack() {
			System.out.println("Gazi attack");
		}
	}

	class Airforce {
		void attack() {
			System.out.println("Balakot attack");
		}
	}

	//main
	public static void main(String[] args) {
		IndianDefence ind = new IndianDefence();
		 
	
		//as we know that attack method is inside the class Army navy and Airforce so lets try to call it on Amry's object

		Army a = new Army();
		a.attack();

		/* but here also gives error that non-static variable this cannot be referenced from static context
		 *
		 * Here Inner classes are non-static means these are instance variable of class IndianDefence so as we know we cannot 
		 * access instace in static method wihtout using object	
		 *
		 *
		 * but why it is saying variable this it should be variable army write ? 
		 *
		 * When we create object in main method in same class then every instance is considered using 'this'  variable so thats why it gives 
		 * this cannot be referenced. because inner classes are instances of IndianDefence class 
		 */
		
	}
}



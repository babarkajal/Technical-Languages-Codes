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
}

class Main {
	//main
	public static void main(String[] args) {
		IndianDefence ind = new IndianDefence();	

		IndianDefence.Army a = new IndianDefence.Army();
		/* error: an enclosing instance that contains IndianDefence.Army is required 
		 * Now here error is enclosing instance is required that means the object who is holding the inner class is reuqired to access 
		 * the instance variable Army class
		 *
		 */
		
	}
}



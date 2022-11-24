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

		Army a = ind.new Army();
		//as we access instance variables inside the static using object same here we are accesing Army class using object ind
		
		a.attack();


	}
}



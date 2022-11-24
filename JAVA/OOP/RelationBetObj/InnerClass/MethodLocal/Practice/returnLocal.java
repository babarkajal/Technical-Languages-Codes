/*
 * 	return Instance of method local inner class through that object
 */



class Zomato {
	Hotels order() {					//ethe method la mhiti nhiye nahiye ki pude inner class declare kela janar ahe te

		System.out.println("In Zomato order method");
		class Hotels {
			String name;
			Hotels(String name ) {
				this.name = name;
			}

			void orderPlaced() {
				System.out.println("Order placd at hotel "+ name);
			}
		}
		return new Hotels("GreenHouse");
	}

	public static void main(String[] args) {
		Zomato z= new Zomato();
		z.order().orderPlaced();
	}
}

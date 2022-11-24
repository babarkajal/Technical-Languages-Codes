/*
 * 	return Instance of method local inner class through that object
 */



class Zomato {
	void order() {					

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
	}
	Order.Hotels h = new Hotels();
	public static void main(String[] args) {
		Zomato z= new Zomato();
		z.order().orderPlaced();
	}
}

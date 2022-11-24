/*
 * 		Accessing Method local varible inside the local inner class
 *	1.6 onword it works fine but for 1.6 local var  should be declared as final to insure that that var will not change in inner class
 */


class Zomato {

	static void order() {
		
		int x = 10;
		class Hotels {
			String name;
			Hotels(String name ) {
				this.name = name;
			}

			void orderPlaced() {
				System.out.println("Order placd at hotel "+ name);
				System.out.println("x = "+ x);			
			}
		}
		Hotels h = new Hotels("GreenHouse");
		h.orderPlaced();	
	}
	public static void main(String[] args) {
		Zomato z = new Zomato();
		z.order();
	}
}

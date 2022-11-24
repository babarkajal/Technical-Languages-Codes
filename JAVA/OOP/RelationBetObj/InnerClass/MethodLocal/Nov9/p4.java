/*
 * 			----- Inner class can be wriiten in static and non-static methods
 * 			1.Static method
 * 			 		In static method inner class we cannot access instance variable.
 * 			 		this is not prsent in static methods
 * 			2.Non-static method:
 * 					we can acces static as well as non static members of outer class
 */ 		



class Zomato {
	int x = 10;			//this is an instance variable
	static int y = 10;		//this is static  variable

	static void order() {

		System.out.println("In Zomato order method");
		
		class Hotels {
			String name;
			Hotels(String name ) {
				this.name = name;
			}

			void orderPlaced() {
				System.out.println("Order placd at hotel "+ name);
				//System.out.println("x = "+ x);				//error nonstatic cannot be accessed
				System.out.println("y = "+ y);
			}
		}
		Hotels h = new Hotels("GreenHouse");
		h.orderPlaced();
		
	}
	
	public static void main(String[] args) {
		Zomato z= new Zomato();
		z.order();
	}
}

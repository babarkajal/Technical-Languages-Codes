/*
 *	E.g Zomato is outer class and when we call method order there are Num of hotels available
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
		Hotels h = new Hotels("GreenHouse");
		h.orderPlaced();
	}
	
	void goOut() {
		System.out.println("book a table");
		class XYZ {					//complier gives name as Zomato$1XYZ.class
			class PQR {				//complier gives name as Zomato$1XYZ$PQR.class

			}
		}
	}

	public static void main(String[] args) {
		Zomato z= new Zomato();
		z.order();
	}
}

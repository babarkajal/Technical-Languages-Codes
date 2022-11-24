
//bB
/* create two objects and write two constructors
 */

class Shape {
	
	//this two are methods not constructor
	void Shape(int side) {
		System.out.println("Square of side "+ side);
		System.out.println("area of of square "+ (side*side));
	}

	void Shape(int l, int b) {
		System.out.println("Rectangle of length and breadth "+ l + " " + b);
		System.out.println("area of of rectangle "+ (l*b));
	}
}

class main {
	public static void main(String[] args) {
		/*
		Shape s1 = new Shape(10); 
		Shape s2 = new Shape(20);
		error: constructor Shape in class Shape cannot be applied to given types;
		Shape s1 = new Shape(10);

		*/
		Shape s1 = new Shape();
		s1.Shape(10);
		Shape s2 = new Shape();
		s2.Shape(5,6);

		

	}

}

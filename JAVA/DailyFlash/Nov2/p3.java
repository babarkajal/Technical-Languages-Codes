/* write all possible combination of constructors along wiht access specifier
 */
 

/* In this class we are going to create all shapes */
class  Shape {
	
	/* public con
	 * This con can be accessed outside of class ,file and folder also
	 */
	public Shape() {
	
		System.out.println("Empty shape constructor");
		//access private constructor and check whether it is accessible or not 
		
		Shape  circle = new Shape(20);

		//access protected con 
		Shape rect = new Shape(4,5);
	}

	/* Private Con
	 * This constructor can be accesed within class only 
	 */
	private Shape(int r) {
		System.out.println("Shape Circle is created of radius "+ r);

	}
	
	/* parameterized and protected
	 * This constructor can be accessible within class,file and in child class also but not in another file
	 */

	protected Shape(int l, int b) {
		System.out.println("Shape rectanlge is created with length "+ l + " and breadth " +b);

	}

} 


class Main {
	public static void main(String[] args) {
		//create Object to call the constructor 
		Shape s = new Shape();		//this will call public con	

		//accessing private con is compile time error
		//Shape s2 = new Shape(10);		
	        /*No suitable constructor found for Shape(int) */	
		
		//we can access protected member.In same file it works as default 
		Shape s4 = new Shape(10,30);		

	}

}



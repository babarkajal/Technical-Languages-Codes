/*
 * Constructor
 *	name of class and constructor is same
 *	no return type(even void is not  allowed)
 *	there is always one constructor provided by complier if no constructor provided by programmer which is default 
 *	In c++ there are two implicit constructor 1. Copy 2. Default
 *	present on heap in object
 *	called implicitly after creation of object
 *	first line is always super()
 *	Inilises the instance variable of class
 *	we can call constructor from another constructor using this()
 */
 
class Pune {
	String area = "Warje";
	int x = 10;

	Pune() {
		System.out.println("Area " +area);
	}
	public static void main(String args[]) {
		Pune p = new Pune();
	}
}

//write nested interface

interface  MacD{
	
	void makeburger();			//abstract method
	
	//again MacD also dont know the procedure for bread 
	interface Bread {
		void makeBread();	
	}
}

class Pune implements MacD, MacD.Bread  {
	public void makeburger() {
			System.out.println("Non veg burger");
	}

	public void makeBread() {
		System.out.println("Bread is ready for burger making");
	}

	public static void main(String args[]) {
		Pune  p = new Pune();
		p.makeBread();
		p.makeburger();
	}
}

/*
 kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Interface/Dec25_DF$ java Pune 
Bread is ready for burger making
Non veg burger

*/

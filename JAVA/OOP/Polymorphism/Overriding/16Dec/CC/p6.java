/*
 *	 ________________Overriding abstract method____________________
 * 
 *	Abstract method can be overriden and overriding mehtod can  be declared as abstract 	
 */

class Grandpa {
	void marry() {
		System.out.println("marry with Gangubai");
	}
}

abstract class Father extends Grandpa {
	abstract void marry();
}

class Son extends Father {
	void marry() {
		System.out.println("marry with Disha patani");
	}
	
	public static void main(String args[]) {
		Father c = new Son();
		c.marry();
	}
}



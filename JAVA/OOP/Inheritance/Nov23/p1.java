/*
 * 	___________________ Inheritance ___________________
 * 	Inheritance means using already defined functionality and adding new once
 * 	When there is some common functionality then Inheritance is used
 * 	CHild class inherits from Super class
 */
 

class Core2Web {
	Core2Web() {
		System.out.println("Core2Web Constructor");
	}

	void learning() {
		System.out.println("Programming language");
		System.out.println("Guide: Shashi");
	}
}

class Incubator extends Core2Web {
	Incubator() {
		System.out.println("Incubator Constructor");
	}
	
	void implementation() {
		System.out.println("Self learning");
		System.out.println("Implementation of project");
	}
}

class Network extends Core2Web{
	Network() {
		System.out.println("Network Constructor");
	}
	
	void connect() {
		System.out.println("C2w network");
		System.out.println("Connect to the Placed student");
	}

}

class Student {
	public static void main(String args[]) {
		
		Core2Web c2$w = new Core2Web();							//Core2Web Constructor
		c2$w.learning();

		Incubator i = new Incubator();
		i.learning();									//inherited method
		i.implementation();		

		Core2Web c = new Incubator();
		/* this is the another way to create object of Incubator. Ref of Core2Web and object of Incubator
		 * but we can call only those methods which are common in child and parent also
		 * child specific methods are not callable because the right side part will come at run time so Complier will go for left side
		 * so that the method will be considered as Core2Web's method
		 * it gives error to those method that cannot find symbol 
		 */
		
		//c.implementaion();								//error
		
		c.learning();
	}
}	

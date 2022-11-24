// Execution of classes in Inheritance.....
//
// First when we call parent then the constructor of PARENT GET CALLED
// When we call Child then first the super i.e. parents constructors gets called and then the Child Constructor gets Called
// When we create the object of child using the reference of the Parent's object then First constructor of parent gets called 
// and then the Child's Constructor get called......

class Parent {

	Parent(){

		System.out.println("In Parent Constructor");
	}

}

class Child extends Parent {

	Child(){

		System.out.println("In Child constructor");
	}

}


class Run {

	public static void main(String... arr){

		Parent p = new Parent();
		Child  c  = new Child();
		Parent p1 = new Child();

	}

}

/*
 *
 * omkars-MacBook-Air:17July2019 omkarajagunde$ vim InheritenceOne.java
omkars-MacBook-Air:17July2019 omkarajagunde$ javac InheritenceOne.java
omkars-MacBook-Air:17July2019 omkarajagunde$ java Run
In Parent Constructor
In Parent Constructor
In Child constructor
In Parent Constructor
In Child constructor

*/

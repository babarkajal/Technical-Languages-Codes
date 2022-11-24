

 
class Parent1 {

	Parent1(){

		System.out.println("In Parent Constructor");
	}

}

class Child1 extends Parent1 {

	Child1(){
		super();  	// Super() should be only written on the first line of the constructorr
		System.out.println("In Child constructor");
		//super(); 	// Super() on this line is not Valid...and gives err bCoz.. Child1 need constructor of
		//		of Parent1 as it inherits Parent1 class so super should be on the First Line...
	}

}


class Run1 {

	public static void main(String... arr){

		Parent1 p = new Parent1();
		Child1  c  = new Child1();
		Parent1 p1 = new Child1();

	}

}

/*
 *
 * omkars-MacBook-Air:17July2019 omkarajagunde$ vim InheritenceTwo.java
omkars-MacBook-Air:17July2019 omkarajagunde$ javac InheritenceTwo.java
omkars-MacBook-Air:17July2019 omkarajagunde$ java Run1
In Parent Constructor
In Parent Constructor
In Child constructor
In Parent Constructor
In Child constructor
omkars-MacBook-Air:17July2019 omkarajagunde$


*/

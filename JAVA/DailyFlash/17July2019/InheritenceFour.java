
class Parent3 {

	Parent3(){

		System.out.println("In Parent Constructor");
//		System.out.println(super.print());
	}

}

class Child3 extends Parent3 {

	Child3(){

		System.out.println("In Child constructor");
//		System.out.println(super.print());
		System.out.println(this);
		System.out.println("Parent in Child : " + super.toString());
	}

}


class Run3 {

	public static void main(String... arr){

		Parent3 p = new Parent3();
		System.out.println("Parent in main : "+ p.hashCode());
		Child3  c  = new Child3();
//		Parent3 p1 = new Child3();

	}

}

/*
 *
 * omkars-MacBook-Air:17July2019 omkarajagunde$ javac InheritenceFour.java
omkars-MacBook-Air:17July2019 omkarajagunde$ java Run3
In Parent Constructor
Parent in main : 2018699554
In Parent Constructor
In Child constructor
Child3@4e25154f
Parent in Child : Child3@4e25154f
omkars-MacBook-Air:17July2019 omkarajagunde$

*/

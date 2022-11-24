
class Parent2 {

	int a = 10;
	int b = 20;
	Parent2(){

		System.out.println("In Parent Constructor");
		System.out.println(a);
		System.out.println(b);
	}

}

class Child2 extends Parent2 {

	int a = 30;
	int b = 40;
	Child2(){

		System.out.println("In Child constructor");
		System.out.println(super.a);
		System.out.println(super.b);
		System.out.println(this.a);
		System.out.println(this.b);
	}

}


class Run2 {

	public static void main(String... arr){

		Parent2 p = new Parent2();
		Child2  c  = new Child2();
		Parent2 p1 = new Child2();

	}

}


/*
 *
 * omkars-MacBook-Air:17July2019 omkarajagunde$ vim InheritenceThree.java
omkars-MacBook-Air:17July2019 omkarajagunde$ javac InheritenceThree.java
omkars-MacBook-Air:17July2019 omkarajagunde$ java Run2
In Parent Constructor
10
20
In Parent Constructor
10
20
In Child constructor
10
20
30
40
In Parent Constructor
10
20
In Child constructor
10
20
30
40
omkars-MacBook-Air:17July2019 omkarajagunde$


*/

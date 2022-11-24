
class Person {
		String name;
		int age;
		Person() {
			System.out.println("In constructor");
		}

		Person(String name, int age) {
			this();
			this.name= name;
			this.age=age;
			this.talk();

		}

	 	void talk() {
			System.out.println("Hello I am "+ name);
			System.out.println("My age is "+ age);

		}

		static void fun(){
			System.out.println("I am in static ");
		}

}

class demo {

	public static void main(String args[]) {
		Person ptr = new Person("kajal", 21);
		ptr.talk();
		ptr.fun();
		
	}

}

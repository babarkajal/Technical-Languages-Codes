/*
 * 		Parameterized constructor
 * 	Overloading can be applied on constructor 
 * 	we can write constructor with different signature means we can provide parameters to itthis is called Parameterized constructor
 */

class Company {
	String cmpName = "BMC-Software";
	private String name = "Rahul";
	private int age = 28;

	Company() {
		System.out.println("In no arg constructor");
	}

	/* parameterized constructor which accpets string and int 
	 * this is used to initlize instance variables which is main purpose of contsrcutors 
	 */
	Company(String name , int age) {
		this.name = name;		//this is the reference which points to the object being created 
		this.age = age;
	}
	int display() {
		System.out.println("Company name "+ cmpName);
		System.out.println("Emp Name = "+ name);
		System.out.println("AGe = "+ age);
		return 0;
	}
}

class Employee{
	public static void main(String [] args) {
		Company rahul = new Company();
		rahul.display();

		Company kanha = new Company("Kanha", 30);
	       kanha.display();
	}
}	


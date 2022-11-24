/* WAP to assign values to var in constructor
*/

class CoronaPatient {
	String name ;
	boolean isPositive;
	int age;

	CoronaPatient(String name , boolean isPositive, int age) {
		this.name = name;
		isPositive = isPositive;
		this.age = age;

	}

	void display() {
		System.out.println("Patinet info ");
		System.out.println("Name "+name );
		System.out.println("is infected? " + isPositive);
		System.out.println("age "+age);


	}
	public static void main(String args[]) {
		//create object of patient
		CoronaPatient c = new CoronaPatient("baliram" , false, 20);
		c.display();
	}

}	

/* A person has a job now implement the composition
 */

class Person {
	String name;

	//create object of job class
	Job j;

	Person(String  name, int id, float salary, String desg ) {
		this.name = name;
		j = new Job(id, salary , desg);
	}
	
	//print the information
	void display() {
		System.out.println("\nPerson details: ");
		System.out.println("Name of the Person: "+ name);
		j.display();
	}
}

class Job {
	int id;
	float salary;
	String desg;
	//constructor for initlization
	Job(int id , float salary, String desg) {
		this.id = id;
		this.salary = salary;
		this.desg = desg;
	}
	
	void display() {
		System.out.println("Id: "+ id);
		System.out.println("salary: "+salary);
		System.out.println("designation: "+desg);
	}
}

class Main {
	public static void main(String[] args) {
		Person kajal = new Person("KAJAL", 101, 10000, "Developer");
		kajal.display();
		Person ganesh = new Person("Ganesh", 102, 20000, "Accountant");
		ganesh.display();
	}

}



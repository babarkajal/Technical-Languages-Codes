//bB
/*
 * Write student class and pass name of student while creating object and if nothin is paseed then print unknown otherwise print the name
 */

class Student {
	public Student() {
		System.out.println("Name of the student  unknown" );
	}
	
	protected Student(String name) {
		System.out.println("Name of the student "+ name);
	}

}

class Prorgam {
	public static void main(String[] args) {
		
		Student s1 = new Student();
		Student s2 = new Student("Akanaksha");
		
	}

}

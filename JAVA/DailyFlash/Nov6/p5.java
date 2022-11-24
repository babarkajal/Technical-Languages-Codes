/* Explain constructor overloading concept using student class
 */

class Student {
	String name;
	int id;
	float marks;

	Student() {
		name = "Unknown";
		id = 0;
		marks = 0.0f;
	}
	Student(String name, int id, float marks) {
		this. name = name;
		this.id= id;
		this.marks = marks;
	}
	
	void info() {
		System.out.println("name  "+ name);
		System.out.println("Id "+ id);
		System.out.println("Marks "+ marks);
	}
}

class Main {
	public static void main(String[] args) {
		Student s1 = new Student("kajal", 223002, 79);
		Student s2 = new Student("Akanksha", 223023, 80);
		Student s3 = new Student();
		s1.info();
		s2.info();
		s3.info();
	}

}


/* 
 * we cannot write private and abstract together because 
 * 	private means we cannot access outside the class
 * 	abstract means dependent on other class to give body 
 * 	so these two meanings are complict thats why we cannot give private and abstract together
 */ 

abstract class Assignment {
	abstract private void write();	//p3.java:4: error: illegal combination of modifiers: abstract and private
	
}


//here student class inherits Assignment class and overrides the write method 
class Student extends Assignment {
	void write() {
		System.out.println("Complete java's assignment within 2 days");
	}	
}

class Teacher {
	public static void main(String []args) {
		Student kajal = new Student();
		kajal.write();
	}
}



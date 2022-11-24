//write real time example for overriding with protected and public scope

class Teacher {
	protected void assignment(){
		System.out.println("8 pages Assignment is given by teacher and should be completed within 2 days");
	}
}

class Student {
	public void assignment() {
		System.out.println("\nStudent writes 4 pages of Assignment and submit it after a month");
	}
	public static void main(String args[]) {
		Teacher t = new Teacher();
		t.assignment();
		Student s = new Student();
		s.assignment();
	}
}

/*
` kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Polymorphism/Overriding/16Dec/DailyFlash$ javac p5.java
kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Polymorphism/Overriding/16Dec/DailyFlash$ java Student
8 pages Assignment is given by teacher and should be completed within 2 days

Student writes 4 pages of Assignment and submit it after a month

*/

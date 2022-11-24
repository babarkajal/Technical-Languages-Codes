/*
 * create class Degree with method getDegree and two subclasses having same method and call each method
 */


class Degree {
	protected void getDegree() {
		System.out.println("I got a degree");
	}
}	

//child class
class UnderGraduate extends Degree {
	
	protected void getDegree() {
		System.out.println("I got a undergraduate  degree");
	}
}	

//child class
class PostGraduate extends Degree {
	
	protected void getDegree() {
		System.out.println("I got a postgraduate  degree");
	}
}	

class Student {
	public static void main(String args[]) {
		Degree d = new Degree();
		d.getDegree();
		
		UnderGraduate u = new UnderGraduate();
		u.getDegree();

		PostGraduate p = new PostGraduate();
		p.getDegree();
			
	}
}


/*
 * kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Polymorphism/Overriding/17Dec$ javac p2.java
kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Polymorphism/Overriding/17Dec$ java Student
I got a degree
I got a undergraduate  degree
I got a postgraduate  degree

*/

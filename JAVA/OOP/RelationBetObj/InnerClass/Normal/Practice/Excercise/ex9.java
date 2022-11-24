/*
Exercise 9: (1) Create an interface with at least one method, and implement that
interface by defining an inner class within a method, which returns a reference to your
interface.
*/

interface Exam {
	void write();
}

class College {
	void mastiTime() {
		System.out.println("Lecture bunk. Masti time");
	}
	
	//jevha exam yete tevha 
	Exam exam() {
		System.out.println("All night study");

		class Sem1 implements Exam {
			public void write() {
				System.out.println("Exam has started. Write all ans");
			}
		}

		return new Sem1();			//returns object of local inner class
	}
}

class main {
	public static void main(String args[]) {
		College fy = new College();
		fy.mastiTime();
		//College.Sem1 nov19 = new College.Sem1();		//error cannot find symbol 
		//College.Sem1 nov19 = fy.exam();			//ethe sem1 ha class distch nhiye karan to method chya aat madhe ahe
		
		Exam nov19 = fy.exam();					//instead of sem1 we can use ref of Exam interface
		nov19.write();	

	}
}	

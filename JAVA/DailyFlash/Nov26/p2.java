/*
 * 	write a progrma to print parent class variables inti child class method
 */

class Library {
	String name = "Sarawaswati Library";
	String loc = "Warje";
}

class Book extends Library {
	Book(String s ) {
		System.out.println("book name "+ s);
	}
	void info() {
		System.out.println("Take book from "+super.name );
		System.out.println("Loc "+super.loc);
	}
}

class Customer {
	public static void main(String args[]) {
		
		Book B = new Book("Dnyaneshwari");
		B.info();
	}
}

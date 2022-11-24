//bB

class Library {
	String lName;
	String lLoc;

	Library(String lName, String lLoc) {
		this.lName = lName;
		this.lLoc= lLoc;
	}

	class Book {
		String name;
		float price;
		
		Book(String name, float price) {
			this.name= name;
			this.price =price;
		}

		void display() {
			System.out.println("Welcome to the liBrary "+ lName+ " which is located in area "+ lLoc);
			System.out.println("Enjoy the Book "+ this.name);
			System.out.println("Price is " + this.price);

		}
	}
}

class Program {

	public static void main(String args[]) {
		Library l = new Library("Core2web", "Pune");
		Library.Book c = l.new Book("yayati",600);
		c.display();
	}

}
/*
 *
 op-  Welcome to the liBrary Core2web which is located in area Pune
Enjoy the Book yayati
Price is 600.0

*/

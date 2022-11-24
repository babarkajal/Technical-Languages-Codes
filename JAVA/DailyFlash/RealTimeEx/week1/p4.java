import java.util.Scanner;
class City {
	String name;

	City(String name) {
		this.name = name;
	}
}

class State {
	String name;
	City c1;
	City c2;
	Scanner sc= new Scanner(System.in);

	State(String name) {
		this.name = name;
		System.out.println("Enter 2 names of city in state "+name);
		c1 = new City(sc.next());
		c2 = new City(sc.next());
	}



}

class Country {
	String name;
	Scanner sc= new Scanner(System.in);

	//create object of states
	State s1;
	State s2;

	Country(String name) {
		this.name = name;
		System.out.println("Enter 2 names of states in country "+name+"\n Enter first name: ");

		s1 = new State(sc.next());
		System.out.println("\nEnter second  name");
		s2 = new State(sc.next());
	}

	void display() {
		System.out.println("\nCountry: "+name);
		System.out.println("1.State Name: "+ s1.name);
		System.out.println("City name: ");
		System.out.println(s1.c1.name);
		System.out.println(s1.c2.name);
		
		System.out.println("2.State Name: "+s2.name);
		System.out.println("City names: ");
		System.out.println(s2.c1.name);
		System.out.println(s2.c2.name);
	}
}

class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Country name: ");
		Country c = new Country(sc.next());
		c.display();
	}
}

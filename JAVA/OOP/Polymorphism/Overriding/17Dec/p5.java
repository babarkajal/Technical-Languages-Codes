/* 
 * write real time example based on shopping mall , theatre, education
 */

class ShoppingMall {
	String name;
	ShoppingMall(String name) {
		this.name = name;
	}

	void enjoy() {
		System.out.println("Welcome to "+ name+ " mall");
	}	
}

class Theatre extends ShoppingMall {
	String movie;
	Theatre(String mall,String movie) {
		super(mall);
		this.movie = movie;
	}

	void enjoy() {
		super.enjoy();		//call parent method
		System.out.println("Watching movie "+ movie);
	}
}

class People {
	public static void main(String args[]) {
		ShoppingMall s = new Theatre("Nucleus" , "Tanaji");
		s.enjoy();
	}
}

/*
 * kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Polymorphism/Overriding/17Dec$ java People
Welcome to Nucleus mall
Watching movie Tanaji
*/


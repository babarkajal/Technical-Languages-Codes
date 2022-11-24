/*
 * 		Parameterized constructor
 * 	Overloading can be applied on constructor 
 * 	we can write constructor with different signature means we can provide parameters to itthis is called Parameterized constructor
 */

class CompEng {
	/* If hardcoded values are given then it will be for all objects so  everytime we have to change that name and age. But what if attrributes are private we cannot access outside the class. we have to take help of methods 
	 * Instead of all this parameterized constructor is used because initlization must be done at the time of creation  of objects 	 
	 */
	String name = "Rahul";
	int age = 28;
	CompEng() {
		System.out.println("In default constructor");
	}

	void display() {
		System.out.println("Name "+ name);
		System.out.println("age "+ age);
	}
}

class Student {
	public static void main(String [] args) {
		CompEng rahul = new CompEng();
		rahul.display();

		CompEng kanha = new CompEng();
		kanha.name = "Kanha";
		kanha.age = 30;
		kanha.display();
	}
}

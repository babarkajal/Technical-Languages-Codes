// real time example
class Google {
	Google() {
		System.out.println("----------- Google -----------");
	}	
	void CEO() {
		System.out.println("CEO of Google and Alphabet- Sundar Pichai");
	}
	void info() {
		System.out.println("Parent of Alphabet");
		System.out.println("Foundet in 1998 at California ");
	}
}

class Alphabet extends Google {	
	Alphabet() {
		System.out.println("----------- Alphabet -----------");
	}	
	void info() {
		super.info();
		System.out.println("Foundet in 2005 at California ");
	}	
	public static void main(String args[]) {
		Alphabet a = new Alphabet();
		a.CEO();
		a.info();
	}
}



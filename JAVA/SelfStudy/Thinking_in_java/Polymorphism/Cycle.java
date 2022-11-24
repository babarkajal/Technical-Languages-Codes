class Cycle {
	void ride() {
		System.out.println("Cycle ride method");
	}
}

class Unicycle extends Cycle{
	void ride() {
		System.out.println("UniCycle ride method");
	}
}

class Bicycle extends Cycle{

	void ride() {
		System.out.println("Bicycle ride method");
	}
}
class Tricycle extends Cycle{

	void ride() {
		System.out.println("Tricycle ride method");
	}
}

class Test {
	
	static void rideCycle(Tricycle t){
		System.out.println("Tricycle");
		t.ride();
	}
	static public  void main(String args[]) {
		Tricycle T = new Tricycle();		
		Bicycle B = new Bicycle();		
		Unicycle U = new Unicycle();		
		rideCycle(T);
		rideCycle(B);
		rideCycle(U);
	}
}


class Egg {
	int noOfCal;

	Egg(int noOfCal) {
		this.noOfCal = noOfCal;
	}
	int getCal() {
		return noOfCal;
	}
}

class Cream{
	int noOfCal;

	Cream(int noOfCal) {
		this.noOfCal = noOfCal;
	}
	int getCal() {
		return noOfCal;
	}
}

class Chocolate {
	int noOfCal;

	Chocolate(int noOfCal) {
		this.noOfCal = noOfCal;
	}
	int getCal() {
		return noOfCal;
	}
}


class Cake {
	//create object of cream egg and Chocolate
	Egg e;
	Cream c;
	Chocolate ch;
	//write constructor for class cake
	Cake(int eggCal, int creamCal, int chocCal) {
		e = new Egg(eggCal);
		c = new Cream(creamCal);
		ch = new Chocolate(chocCal);
	}
	
	void calculate() {
		int total = e.getCal()+ c.getCal(); ch.getCal();
		System.out.println("Total calarioes are used for cake "+ total);
	}
	public static void main(String args[]) {
		//create object of cake 
		Cake c = new Cake(50,34,32);
		c.calculate();
	}
}

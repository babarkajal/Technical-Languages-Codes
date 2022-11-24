//bB

class Car{
	String name;
	float price;

	Car(String name, int price) {
		this.name = name;
		this.price = price;
	}

	String getModelName(){
		return this.name;
	}
}
class Program {

	public static void main(String args[]) {
		//create object of Car class
		Car maruti = new Car("Maruti", 600000);
		Car mahindra = new Car("Mahindra", 800000);
		System.out.println("Model name "+ maruti.getModelName());
		System.out.println("Model name "+ mahindra.getModelName());
	}	

}

/*
 * Model name Maruti
 * Model name Mahindra

*/


interface Plantation{
	void plantTrees();
}

interface RayatShikshan  extends Plantation {
	void gift();
}

class School implements RayatShikshan {
	public void plantTrees() {
		System.out.println("Every shudent has to grow two plants");
		System.out.println("You have to take care of them");
	}
	public void gift() {
		System.out.println("Je students donhi plants chi chhan care kartil tyla school kadun ek trophy gift denyat yeil");
	}

	public static void main(String args[]) {
		School student = new School();
		student.plantTrees();
		student.gift();
	}
}
/*kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Interface/Dec23DF$ java School 
Every shudent has to grow two plants
You have to take care of them
Je students donhi plants chi chhan care kartil tyla school kadun ek trophy gift denyat yeil

*/

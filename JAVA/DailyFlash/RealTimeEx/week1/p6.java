
class Material {
	int price;
	int quantity;
	Material(int price, int quantity) {
		this.price = price;
		this.quantity = quantity;
	}
	int cost() {
		return price*quantity;
	}
}	

class HouseCon {
	Material iron= new Material(500,50);
	Material bricks = new Material(8,1000);
	Material cement= new Material(500,12);
	
	int total() {
		return iron.cost() + bricks.cost() + cement.cost();
	}
	public static void main(String[] args) {
		HouseCon h = new HouseCon();
		System.out.println("Total costing of house constructing: "+h.total());	
	}
}

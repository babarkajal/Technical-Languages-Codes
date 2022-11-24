//bB
class Infantry {
	int soldiers ;

	Infantry(int soldiers) {
		this.soldiers = soldiers;
	}
	
	void display() {
		System.out.println("Soldiers count: "+ soldiers);
	}

}

class Army {
	//create object of Infantry class
	Infantry inf;
	Army(int soldiers) {
		inf = new Infantry(soldiers);
		inf.display();
	}

	public static void main(String args[]) {
		
		//create object of class Army 
		Army obj = new Army(20);
			
	}
}	

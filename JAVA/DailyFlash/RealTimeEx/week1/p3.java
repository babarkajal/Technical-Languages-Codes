//create clasas of ant
class Ant {
}

//create class of colony
class Colony {
	public static void main(String[] args) {
		//create array of ant class object
		Ant[] arr = new Ant[]{new Ant(), new Ant(), new Ant(), new Ant(), new Ant()};	
		System.out.println("address of object");
		for(int i=0;i<5; i++) 
			System.out.println(arr[i]);
	}
}

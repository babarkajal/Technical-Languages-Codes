//write real time ex for overriding 
//

class Mother {
	
	void work() {
		System.out.println("Mother said, I am going to aunt's house");
		System.out.println("Maintain the house and clean it");
	}
}

class Daughter extends Mother{
	

	void work() {
		System.out.println("Wake up at 11'O clock");
		System.out.println("Khup sara pasara karun thevlela asto");
		System.out.println("Aaine dilel sagl timetable override kel");
	}

	public static void main(String args[]) {
		Mother m = new Daughter();
		m.work();
	}

}

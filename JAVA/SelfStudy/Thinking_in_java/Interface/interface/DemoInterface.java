interface Parent {
	int i=100;
	void play();
	void goToSchool();
	void study();
	void eat();
}

class Child implements Parent {
	//private int i = 20;
	public 	void eat() {
			System.out.println("eat method");
		}
	public 	void  study() {
			System.out.println("Study kartoys ");
		}

	 public 	void goToSchool(){
			System.out.println("shalet jatoy");
		}
		public void play(){
			System.out.println("Khelyla javu ka");
		}
		int eat(int i) {
			System.out.println("Eat overloaded");
			return 0;
		}
		public static void main(String[] args) {
			Child c = new Child();
				c.eat();
				c.play();
				c.study();
				c. goToSchool();
				c.eat(10);
				System.out.println("i= "+i);
				i = 20;
				System.out.println("i= "+i);

		}
}

class Program { 
	Program() {
		System.out.println("In no-args constrcutor ");
	}
	Program(int i) {
		System.out.println("In arg constrcutor ");
		System.out.println(i);
	}

}
class Main {
	public static void main(String[] args) {
		Program p=new Program();
		Program p1 = new Program(10);
		
	}
}

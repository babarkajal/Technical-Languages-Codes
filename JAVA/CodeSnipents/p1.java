class Core2Web {
	static {
	Core2Web c = new Core2Web();
	}
	
	String s = Core2Web.fun();
	static String fun() {
		return "kajal";
	}
	
	public static void main(String args[]) {
		System.out.println("Main");
	}
	Core2Web() {
		System.out.println("Con");
		
	}
}

class Core2Web {
	static int var =10;
	Core2Web(Integer var) {
		this.var = var;
	}	

	Core2Web(int var) {
		System.out.println("Hiii");
		this.var = var;
	}	
	public static void main(String args[]) {
		Core2Web c2w = new Core2Web(100);
	}
}

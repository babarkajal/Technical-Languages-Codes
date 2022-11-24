class Program {
	int i =40;

	public static void main(String args[]) {
		Program p1 = new Program();
		Program p2 = new Program();
		Program p3 = p2;
		System.out.println(p1==p2);
		System.out.println(p2==p3);
	}

}

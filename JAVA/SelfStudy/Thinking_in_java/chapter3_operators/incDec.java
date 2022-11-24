class Program {
	public static void main(String args[]) {
		int i=10;
		int ans = i++ + i++ + --i - ++i;
		System.out.println("Ans: "+ ans);
	}
}

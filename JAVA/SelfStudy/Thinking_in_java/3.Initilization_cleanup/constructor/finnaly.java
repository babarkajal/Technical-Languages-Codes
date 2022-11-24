class finallyClass {
	int i;
	finallyClass() {
		System.out.println("hello");
	}
		
	protected void finalize() {
		//	super.finalize();
		System.out.println("Finalize");
		
	}

}


class Program {
	public static void main(String[] args) {
		finallyClass f = new finallyClass();	
		System.gc();
	}

}

class Two extends One {
		private  int val;
		Two() {
			System.out.println("Hello from class two's constrcutor");
			val = 20;
		}

		void show() {
			System.out.println("In show method");
			System.out.println("z= "+z);
			System.out.println("a= "+a);
			System.out.println("val: "+val);
		}

}

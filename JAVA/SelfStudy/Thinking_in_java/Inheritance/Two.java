import pck1.One;
class Two extends One {
		private  int val;
		Two() {
			super(10);
			System.out.println("Hello from class two's constrcutor");
			val = 20;
		}
		void show() {
			System.out.println(x);
			display2();
			display1();
			System.out.println("In show method");
			System.out.println("z= "+z);
			System.out.println("a= "+a);
			System.out.println("val: "+val);
		}

}

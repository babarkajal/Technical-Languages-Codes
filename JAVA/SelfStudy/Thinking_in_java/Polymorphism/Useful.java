class Useful {
		int x =200;
		void f() {
				System.out.println("In useful f()");
		}

		void g() {
			System.out.println("In useful g()");
		}
}

class MoreUseful extends Useful {
		int x = 10;
		void f() {
				System.out.println("In Moreuseful f()");
		}
		//overriding methods
		void g() {
			System.out.println("In Moreuseful g()");
		}
		//extending interface
		void u() {
			System.out.println("In Moreuseful u()");
		}
}

class Test {
	public static void main(String args[]){
		System.out.println("Moreuseful ");
		MoreUseful mu = new MoreUseful();
		System.out.println("mu.x="+mu.x);
		mu.f();
		mu.g();
		mu.u();
		System.out.println("Upcasting: ");
		Useful uf = new MoreUseful();
		System.out.println("uf.x="+uf.x);
		uf.f();
		uf.g();
		//uf.u();

		//throws an exception that classCastException
		System.out.println("Downcasting: ");
		MoreUseful muf =(MoreUseful) new Useful();		//explicit typecast
		System.out.println("uf.x="+uf.x);
		muf.f();
		muf.g();

	}
}

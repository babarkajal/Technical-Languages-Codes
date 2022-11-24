class Outer {
		class Inner {
			Inner() {
				System.out.println("In inner constrctor");
			}

			void fun() {
				System.out.println("In fun method");
			}
		}
}

class Main {
		Outer.Inner i = new Outer().new Inner();
		public static void main(String args[]) {
		
		}
}

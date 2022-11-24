class Outer {
		class Inner {
			Inner() {
				System.out.println("In inner constrctor");
			}

			void fun() {
				System.out.println("In fun method");
			}
		}
		Inner getInner() {
			return new Inner();
		}
}

class Main {
		public static void main(String args[]) {
			Outer o = new Outer();
			Outer.Inner i  = o.getInner();
			i.fun();
		}
}

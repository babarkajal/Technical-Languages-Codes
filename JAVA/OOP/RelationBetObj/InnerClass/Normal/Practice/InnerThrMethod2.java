class Outer {
		class Inner {
			Inner() {
				System.out.println("In inner constrctor");
			}

			void fun() {
				System.out.println("In fun method");
			}
		}
		static Inner getInner() {
			return new Inner();			//error this() cannot be referenced from static context
		}
}

class Main {
		public static void main(String args[]) {
			Outer o = new Outer();
			Outer.Inner i  = o.getInner();
			i.fun();
		}
}

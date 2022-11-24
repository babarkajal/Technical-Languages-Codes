/*
 * 	_____________Static method override____________
 *
 * 	Static means class's method. Mhnjech parent specific
 *	so parent doesn't allow child to override it
 *	static cannot be overriden
 *	
 *	1.when parent method is static
 */

class Parent {
        static void m1() {
                System.out.println("In m1-parent");
        }
}

class Child extends Parent {

        void m1() {                             //error: cannot override
                System.out.println("In m1-Child");
        }

        public static void main(String args[]) {
                Parent c = new Child();
                c.m1();
        }
}


/*
 * 	_____________Static method override____________
 *
 * 	Static means class's method. ya case madhe parent chi method inheritance through child kade ali ahe ani tych method la 
 * 	child swatachi static method mhnun declare kartoy. Static method hi class chi method asavi na ki inherit hovun aleli 
 * 		
 *	2.when child's method is static
 */

class Parent {
	
        void m1() {
                System.out.println("In m1-parent");
        }
}

class Child extends Parent {

        static void m1() {                             //error: cannot override
                System.out.println("In m1-Child");
        }

        public static void main(String args[]) {
                Parent c = new Child();
                c.m1();
        }
}


/*
 * 	_____________Static method override____________
 *	
 * 	This concept is called as mehtod hiding. 	
 *	2.when both methods are static
 */

class Parent {
	
        static void m1() {
                System.out.println("In m1-parent");
        }
}

class Child extends Parent {

        static void m1() {                             
                System.out.println("In m1-Child");
        }

        public static void main(String args[]) {
                Parent c = new Child();
                c.m1();			//jycha ref asto tychich method call hote
        }
}


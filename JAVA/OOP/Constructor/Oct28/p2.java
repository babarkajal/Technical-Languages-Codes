/*
 * 		--- This in static method ---
 * this referes to the object on which method is called 
 * In static method , static can be called using classname there is no need to create object so 'this' is not present 
 */

class IPL {
        private String pName;
        private int runs;

        //constrctor
        IPL(){
                System.out.println("In No-arg constructor");
        }

        IPL(String pName , int runs) {

                this.pName  = pName;
                this.runs = runs;
        }

        static void display() {
		
                System.out.println("Player name: "+ this.pName);
                System.out.println("Runs: "+ this.runs);
        	/*Error
		 * non-static variable this cannot be reference from static content
		 */
	}
}

class Match {
        public static void main(String[] args) {
                IPL ipl2019 = new IPL("Virat ", 256);
                ipl2019.display();
        }
}


/*
 * ________real time Example________
 *
 * Playebooks and books
 * 		Accessing static inner class outside of class
 */

class Playebooks {
	static class books {
		void orderbooks() {
			System.out.println("Order books from Anywhere");
		}		
	}
}

class Orderbooks {
	public static void main(String args[] ){
		//books b= new books();
		/*error:cannot find books 
		 * bcoz the books is inside the Playebooks
		 */
		Playebooks.books b= new Playebooks.books();
		b.orderbooks();
	}
}

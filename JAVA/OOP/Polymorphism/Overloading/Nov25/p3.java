/*
 * 	Methods with dff signature
 */

class Add {
	void add(int x , int y) {
		System.out.println("addition of two "+(x+y));
	}

	void add(int x, int y, int z) {
		System.out.println("addition of three "+(x+y+z));

	}

	public static void main(String args[]) {
		Add d = new Add();
		d.add(10,20);
		d.add(10,20,30);
		d.add(10);		//error no suitable method found for call add(int)
	}
}

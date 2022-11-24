/*2) Add a method to the class Sequence.SequenceSelector that produces
the reference to the outer class Sequence.
*/


interface Selector {
	boolean  end();
	Object current();
	void next();
}

class Sequence {

	//private variable
	private Object items[];
	private int next = 0;
	public Sequence(int size) {
		items = new Object[size];
	}
	public void add(Object x) {
		if(next < items.length) {
			items[next++] = x;
		}
	}


	//private inner class
	private class SeqSel implements Selector {
			private int i = 0;
			public boolean end() { return i == items.length; }
			public Object current() { return items[i]; }
			public void next() { if(i < items.length) i++;}


			//protected method added here
			Sequence get() {
				return new Sequence();
			}
	}

	public Selector selector() {return new SeqSel(); }

	public static void main(String args[]) {
		Sequence seq = new Sequence(5);
		for(int i=0; i<5; i++) {
			seq.add(Integer.toString(i));
		}
		Selector sel = seq.selector();

		while(!sel.end()) {
			System.out.println(" "+ sel.current());
			sel.next();
		}
		
	}
}

/*
 * 	______________ Returning anonymous inner class______________
 *
 */

interface Content {
	void value();
}

class Parcel {

	public Content content() {

		//this is anonymour inner class
		return new Content() {
			private int i=40;
			public void value() {
				System.out.println("i = "+ i);
			}
		};
	}

	public static void main(String args[]){
		Parcel p = new Parcel();
		Content c = p.content();
		c.value();
	}
}

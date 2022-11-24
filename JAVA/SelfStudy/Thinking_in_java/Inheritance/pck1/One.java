package pck1;
public class One{
	private int x;
	private int y;
	
	//public
	public int z;
	
	//protected
	protected int a;

	public One(int i) {
		System.out.println("One's constructor");
		x= 10;
		y=20;
	       	z = 30;
		a = 100;	
	}	
	
	//default access
	private void display1() {
		System.out.println("In default display1");
		System.out.println("xyz");
		System.out.println(x+" "+y+" "+z);
		System.out.println("a= "+a);
	}
	protected void display2() {
		System.out.println("In protected display2");
		System.out.println("xyz");
		System.out.println(x+" "+y+" "+z);

	}	
}


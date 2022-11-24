public  class Sprinkle{
	private String val1, val2;
       	private WaterSource  s = new WaterSource();
	Sprinkle() {
		System.out.println("sprinkler");
		System.out.println("s: "+s);
	}	
        public static void main(String[] args) {
        	Sprinkle Sp = new Sprinkle();
		System.out.println("sp: "+Sp);
	}
}

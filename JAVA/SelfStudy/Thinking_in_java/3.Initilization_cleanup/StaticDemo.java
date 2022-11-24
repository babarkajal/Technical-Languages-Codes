
//Demo class
class Demo {
	Demo() {
		System.out.println("Demo() constructore is called ");
	}
	Demo(int i) {
		System.out.println("Demo(i) constructor is called "+i);
	}
	static {
		System.out.println("Demo static");	
	}
}//	

///CheckInit 
class CheckInit {
	
	Demo d1 = new Demo();
	CheckInit(int i) {
		System.out.println("ChechInit() constructore is called "+ i);
			
	}

	Demo d2 = new Demo();

	//static 
	static Demo d3 = new Demo(20);
	static {
		System.out.println("Static print()");
	}

}//


///main
class StaticInit {

	//main  
	public static void main(String[] args) {
		StaticInit p  = new StaticInit();	
	}

	//instance var
	CheckInit c = new CheckInit(10);
	CheckInit c2 = new CheckInit(30);
}//

class Demo {
	Demo() {
		System.out.println("Demo() constructore is called ");
	}
	Demo(int i) {
		System.out.println("Demo(i) constructor is called "+i);
	}
}	


class CheckInit {
	
	Demo d1 = new Demo();
	CheckInit(int i) {
		System.out.println("ChechInit() constructore is called "+ i);
			
	}

	Demo d2 = new Demo();

	//static 
	static Demo d3 = new Demo(20);

}


///main
class StaticInit {

	//main  
	public static void main(String[] args) {
		StaticInit p  = new StaticInit();	
	}

	//instance var
	CheckInit c = new CheckInit(10);
	CheckInit c2 = new CheckInit(30);
}

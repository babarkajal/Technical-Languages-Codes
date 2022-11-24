class Demo {
	Demo() {
		System.out.println("Demo() constructore is called ");
	}
}	


class CheckInit {
	
	Demo d1 = new Demo();
	CheckInit(int i) {
		System.out.println("ChechInit() constructore is called "+ i);
			
	}

	Demo d2 = new Demo();

}


///main
class Program {
	public static void main(String[] args) {
		Program p  = new Program();	
	}
	CheckInit c = new CheckInit(10);
}

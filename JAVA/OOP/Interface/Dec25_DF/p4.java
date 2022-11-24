//write two interfaces having parent child relation

//ex old mobile phones have features like calling messaging and single tasking 
interface SimpleMobile {
	void calling();
	void msg();
}
//android phones having SimpleMobile's mobile features as well as extra added
interface Android extends SimpleMobile{
	void multitasking();
	void camera();
}

class MI implements Android {	
	public void calling() {
		System.out.println("Audio-video call supported");
	}
	
	public void msg() {
		System.out.println("Support smart messaging system");
	}

	public void multitasking() {
		System.out.println("It is multitasking");
	}
	
	public void camera() {
		System.out.println("Support 64 MP front camera");
	}
}

class Nokia implements SimpleMobile {
	public void calling() {
		System.out.println("Only audio call is supported");
	}

	public void msg () {
		System.out.println("Support message feature");
	}
}


class Client {
	public static void main(String args[]) {
		MI redmi = new MI();
		redmi.calling();
		redmi.multitasking();
		redmi.camera();

		Nokia n = new Nokia();
		n.calling();
		n.msg();
	}
}

/*kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Interface/Dec25_DF$ java Client 
Audio-video call supported
It is multitasking
Support 64 MP front camera
Only audio call is supported
Support message feature

*/

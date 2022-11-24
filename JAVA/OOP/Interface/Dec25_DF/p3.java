//real time example for interface

interface AWS {
	void VPN();			//AWS gives us servise and use of it is totally depend on us 
	void EC3();
}

class Client implements AWS {
	public void VPN() {
		System.out.println("Virutal private network. User can create his own ");
	}

	public void EC3() {
		System.out.println("Elastic cloud compute capacity service");
	}

	public static void main(String args[]) {
		Client c = new Client();
		c.VPN();
		c.EC3();
	}
}

/*kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Interface/Dec25_DF$ java Client 
Virutal private network. User can create his own 
Elastic cloud compute capacity service

*/

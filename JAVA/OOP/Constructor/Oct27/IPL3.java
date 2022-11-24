/*
 * Constructor:
 *	If we provide any one constructor then complier doesn't add any constructor
 *	if we given private acess specifier to the constructor then it is not shown in byte code
 */	

public class IPL3 {
	
	private IPL3() {

	}	
	IPL3(int i) {
	}

}

/*
 *	technical real time example for single level Inheritance
*/

class  Cloud {
	
	void functionalities() {
		System.out.println("Cloud is a server which runs on the Internet");
		System.out.println("It provides functionalities like storage, computation power etc");
	}
}	

class AWS extends Cloud{
	void awsServices() {
		System.out.println("Aws provides Elastic cloud compute storage, S3 , DyanoDb etc");
		System.out.println("It is secure");
	}	
}

class Client {

	public static void main(String[] args) {
		AWS a =new AWS();
		a.functionalities();
		a.awsServices();
	}

}


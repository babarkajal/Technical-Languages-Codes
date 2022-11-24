//interface in parametrised method num(int n). Write another class A implemnets interfcae perform square operation in that method. PAss vaue to method from main class

interface Square {
	int square(int n);
}

class A implements Square{
	public int square(int n) {
		return n*n;
	}

	public static void main(String[] args) {
		A a= new A();

		System.out.println("The square of 5  = "+ a.square(5));
	}
}

/*
 * kajal@KAJAL:~/Desktop/CLASS/Java/OOP/Interface/Dec25_DF$ java A
The square of 5  = 25

*/

/* p1.java
 *
 * Length of the Stringbuffer 
 * capacity of the Stringbuffer
 */

class StringBufferDemo {

	public static void main(String args[]) {
		StringBuffer s1 = new StringBuffer("Kajal");
		StringBuffer s2 = new StringBuffer();
		System.out.println("length and capacity of empty string ");
		System.out.println("length "+ s2.length());	//0
		System.out.println("caapcity "+ s2.capacity());	//16 default
		
		System.out.println("length and capacity of non-empty string");
		System.out.println("length "+ s1.length());	//5
		System.out.println("caapcity "+ s1.capacity());	//16+5 = 21
	}
}

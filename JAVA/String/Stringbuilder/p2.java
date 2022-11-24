/* stringbuilder class 
 * 	Program to check the time difference
 * 	
 * 	StringBulider is synchronized and takes time to create instances as compared t stringbuffer class
 */

import java.util.GregorianCalendar;
class Difference {
	public static void main(String[] args) {
		long sTime = new GregorianCalendar().getTimeInMillis();
		long sMemory = Runtime.getRuntime().freeMemory();

		StringBuilder s = new StringBuilder("Shashi");

		for(int i=0;i<10000; i++)
			s.append("hello");
		
		long eTime = new GregorianCalendar().getTimeInMillis();
		long eMemory = Runtime.getRuntime().freeMemory();
		System.out.println("time "+ (eTime - sTime));
		System.out.println("Memory "+ (sMemory - eMemory));

	}

}

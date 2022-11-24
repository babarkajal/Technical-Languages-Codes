/* stringbuilder class 
 * 	Program to check the time difference
 * bB
 */

import java.util.GregorianCalendar;
class Difference {
	public static void main(String[] args) {
		long sTime = new GregorianCalendar().getTimeInMillis();
		long sMemory = Runtime.getRuntime().freeMemory();

		StringBuffer s = new StringBuffer("Shashi");

		for(int i=0;i<10000; i++)
			s.append("hello");
		
		System.out.println(s);
		long eTime = new GregorianCalendar().getTimeInMillis();
		long eMemory = Runtime.getRuntime().freeMemory();
		System.out.println("time "+ (eTime - sTime));
		System.out.println("Memory "+ (sMemory - eMemory));

	}

}

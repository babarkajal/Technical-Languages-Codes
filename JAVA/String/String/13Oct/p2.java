/* String Comparision using equalsIgnoreCase() method
 *
 * SOURCE CODE: 
 *     public boolean equalsIgnoreCase(String anotherString) {
        return (this == anotherString) ? true
                : (anotherString != null)
                && (anotherString.length() == length())
                && regionMatches(true, 0, anotherString, 0, length());
    }
*/
import java.util.Scanner;
class EqualsIgnoreCasedemo {
	public static void main(String[] args) {
			Scanner sc = new Scanner(System.in);
			String s1,s2;

			System.out.println("Enter two strings: ");
			s1 = sc.next();
			s2 = sc.next();
			
			//equalsIgnoreCase() methods checks the string and ignores the string
			System.out.println("String are equal "+ s1.equalsIgnoreCase(s2));



	}
}

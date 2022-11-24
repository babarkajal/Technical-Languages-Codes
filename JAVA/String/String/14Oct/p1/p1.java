/*
 *  public int compareTo(String anotherString) {
        byte v1[] = value;
        byte v2[] = anotherString.value;
        if (coder() == anotherString.coder()) {
            return isLatin1() ? StringLatin1.compareTo(v1, v2)
                              : StringUTF16.compareTo(v1, v2);
        }
        return isLatin1() ? StringLatin1.compareToUTF16(v1, v2)
                          : StringUTF16.compareToLatin1(v1, v2);
     }

*/

/* 
 * String ComapareTo() method:
 * 	compareTo() method compares two string 
 * Case 1:
 * 	When two strings are same then it returns 0
 */

class CompareToDemo {
	public static void main(String[] args) {
		//create two string objects 
		String s1 = "Kajal";
		String s2 = "Kajal";
		
		System.out.println("CompareTo demo : ");
		System.out.println("Case 1: When two strings are same");
		System.out.println("s1 = "+ s1);
		System.out.println("s2 = "+s2);

		System.out.println("s1.compareTo(s2) = "+ s1.compareTo(s2));
	

	}

}

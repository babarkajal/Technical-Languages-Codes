/* equals method:
        - used to check the content of the string not the reference
        - case sensative
        - called using object

        public boolean equals(Object anObject) {
                if (this == anObject) {
                        return true;
                }
                if (anObject instanceof String) {
                        String anotherString = (String)anObject;
                        int n = value.length;
                        if (n == anotherString.value.length) {
                                char v1[] = value;
                                char v2[] = anotherString.value;
                                int i = 0;
                                while (n-- != 0) {
                                        if (v1[i] != v2[i])
                                                return false;
                                        i++;
                                }
                                return true;
                        }
                }
                return false;
    }




*/

class StringEqual {
        public static void main(String[] args) {
                //take two string
		                
		String s1 = new String("Core2web");
                String s2 = new String("Core2web");
                /* s1 and s2 contain same string but holding diffrent value because two seprate
                   object will be creatd on heap
                 */
                  System.out.println("s1 == s2  "+(s1==s2));
                  // here strings are same but references are diffrent 

                  //so for checking the content string class provides one fucntion named as equals()
                  System.out.println("s1.equals(s2)  "+s1.equals(s2));
   
   	}
}

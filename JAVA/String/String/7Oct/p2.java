//string declaration

class StringDemo {
        public static void main(String[] args) {
                //using string literal
                String str1 = "Core2web";
                /* jevha string hi literal use karun create keli jate tevha ti SCP(string constant pool)
                  madhe thevli jate with reference
                 */
                String str2 = new String("biencaps");
                /* new ne create keleli string don thikani store keli jate
                   1. Heap : with reference
                   2. SCP without reference
                */
                System.out.println(str1);
                System.out.println(str2);
                System.out.println(str1.toString());            //Core2web
                System.out.println(str2.toString());            //biencaps
        }
}

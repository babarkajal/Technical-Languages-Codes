
/* intern() method
        It is used to give ref of string stored on SCP

*/

class StringDemo {
        public static void main(String[] args) {

                //create one string one SCP
                String s1 = "Core2web";                 //s1 is holding 100


                //create on string on heap
                String s2 = new String("Core2web");     //s2 is holding 200

                System.out.println(s1);
                System.out.println(s2);

                System.out.println("s1==s2  "+ (s1==s2));                //false
                /* ans is false karan donhi vegle thikani point kart ahet
                */

                //s1 la SCP var point karyla force karych karan SCP var pn ek without references chi string ahe
                System.out.println("inter() "+ s2.intern());            //ans is Core2web

                s2 = s2.intern();

                //now s1 and s2 are pointing to the same location
                System.out.println("s1 == s2 "+ (s1==s2));

        }
}

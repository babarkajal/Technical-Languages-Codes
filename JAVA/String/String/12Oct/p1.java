//Check the references of the string

class Program {
        public static void main(String[] args) {
                String s1 = "Core2web";                 //created on SCP consider add as 100
                String s2 = new String("Core2web");
                /* created on heap with ref 200 and without ref on SCP */

                String s3 = "Core2web";               //already present on heap ref is 100
                String s4  = new String("Core2web");  //new object created in heap with ref 300

                System.out.println(s1);                 //Core2web
                System.out.println(s2);                 //Core2web
                System.out.println(s3);                 //Core2web
                System.out.println(s4);                 //Core2web

                System.out.println("Comparison");
                System.out.println("s1 == s2 "+ (s1==s2));         //100==200 ->false
                System.out.println("s1 == s3 "+ (s1==s3));         //100==100 ->true
                System.out.println("s2 == s3 "+ (s3==s2));        //100==200 ->false
                System.out.println("s2 == s4 "+ (s2==s4));        //200 == 300 --> false
        }
}

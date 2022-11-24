//string on SCP with same value

class StringDemo {
        public static void main(String[] args) {

                String obj1 = new String("CSK"); //CSk stored on SCP and heap
                String obj2 = new String("MI");  //MI also stored on SCP and heap
                String obj3 = new String("RCb"); //RCb stored on heap and SCP
                String obj4 = new String("MI");  //MI is stored on heap and scp
                String obj5 = "RCb";
                /* here rcb can be stored on SCP but SCP can hold onlyunique strings.
                   RCb is already on SCP so its reference will be given to the obj5
                   means obj3 and obj5 will contain same reference
                 */
                String obj6 = "CSK"; //same for csk

                System.out.println(obj1.hashCode());            //67035
                System.out.println(obj2.hashCode());            //2460
                System.out.println(obj3.hashCode());            //80977
                System.out.println(obj4.hashCode());            //2460
                System.out.println(obj5.hashCode());            //80977
                System.out.println(obj6.hashCode());            //67035


        }
}

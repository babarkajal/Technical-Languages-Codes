/*Program 2: Write a Java Program, which will contain one number ‘num’. Use the
following operators on it and print the output.
1. num >>>= 2
2. num <<= 3
3. num ^= 2
4. num = ++num
5. num = ~num
*/

class Operators {
    public static void main(String[] args) {
            int num= 16;
            System.out.println("num >>>= 2 = "+ (num >>>= 2));        //4
            /*
              num >>>=2 is equivlaent to num = num>>>2
              16 right shift by 2
              16 ==>            0001 0000
                                0000 1000
                                0000 0100     ==>op = 4
            */
            System.out.println("num<<= 3 = "+(num<<=2));          //16
            /*
              num = num<<2
              4 ==>          0000 0100
              left shift by 2
                             0001 0000  ==> op = 16
            */

            System.out.println("num^= 2 = "+(num ^= 2));        //18
            /*
                num = 16
                num = 16 ^ 2
                      convert it into binary and perform xor operations
                      0001 0000
                      0000 0010
                      ---------
                      0001 0010   ==>18
            */
            System.out.println("num =  ++num = "+(num=++num));    //19
            /* num = ++num
              num = 19
            */
            System.out.println("num = ~num  "+(num = ~num));    //-20
            /*
              num = ~num
                  = invert all the bits
                  = 19              =>        0001 0011
                                              1110 1100
                                              ----------
                                              to obtain value calculate its 2's compliment
                                              0001 0011
                                              +       1
                                              ---------
                                              0001 0100 ==> -20
          */


    }
}

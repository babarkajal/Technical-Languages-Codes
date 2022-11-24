class BitwiseInt {
    public static void main(String[] args) {
        //bitwise and
        int x = 9,y =10;
        int ans;
        System.out.println("Operations on long value: ");

        ans = x&y;
        /*  x =   0000 1001
            y =   0000 1010
            ---------------
            x&y=  0000 1000   ==> 8
        */
        System.out.println("ans(&) = "+ans);   //8


        //bitwsie or |
        ans = x | y;
        /*  x =   0000 1001
            y =   0000 1010
            ---------------
            x|y=  0000 1011   ==> 11
        */
        System.out.println("ans(|) = "+ans);   //11

        //bitwsie xor ^
        ans = x ^ y;
        /*  x =   0000 1001
            y =   0000 1010
            ---------------
            x|y=  0000 0011   ==> 3
        */
        System.out.println("ans(^) = "+ans);   //3


        //bitwsie compliment ~
        ans = ~x;
        /*  x =   0000 1001
            ---------------
            ~x =  1111 0110

            all bits are inverted so MSb will be 1 means negative num so find whose binary number is this
            find 2's compliment
                  1111 0110
            1's   0000 1001
            add 1         1
                  ----------
                  0000 1010     ==> 10
              ---------
             | ~x = -10 |
              ---------

        System.out.println("ans(~) = "+ans);   //-10*/

        System.out.println("Operations on long value: ");
        long num1 = 10l;
        long num2 = 50l;
        System.out.println("op(&) = "+(num1&num2));
        /*          10 => 0000 1010
                    50 => 0011 0010
                    ---------------
                          0000 0010           ==>2
        */
        System.out.println("op(|) = "+(num1|num2));
        /*          10 => 0000 1010
                    50 => 0011 0010
                    ---------------
                          0011 1010           ==>58
        */

        System.out.println("op(^) = "+(num1^num2));
        /*          10 => 0000 1010
                    50 => 0011 0010
                    ---------------
                          0011 1000           ==>56
        */


      }

  }

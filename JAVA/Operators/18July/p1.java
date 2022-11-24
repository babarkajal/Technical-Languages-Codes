class BitwiseDemo {
    public static void main(String[] args) {
        //bitwise and
        int x = 9,y =10;
        int ans;

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
        */
        System.out.println("ans(~) = "+ans);   //-10

    }

  }

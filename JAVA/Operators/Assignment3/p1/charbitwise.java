class BitwiseChar {
    public static void main(String[] args) {
        //bitwise and on char
        char x = 'A',y ='C';        //here x is 65 ans y is 67
        int ans;
        System.out.println("Operations on character value: ");

        ans = x&y;
        /*  x =   0100 0001
            y =   0100 0011
            ---------------
            x&y=  0100 0001   ==> 65
        */
        System.out.println("op(&) = "+ans);   //65


        //bitwsie or |
        ans = x | y;
        /*  x =   0100 0001
            y =   0100 0011
            ---------------
            x|y=  0100 0011   ==> 67
        */
        System.out.println("ans(|) = "+ans);   //67

        //bitwsie xor ^
        ans = x ^ y;
        /*  x =   0100 0001
            y =   0100 0011
            ---------------
            x|y=  0000 0010   ==> 2
        */
        System.out.println("ans(^) = "+ans);   //2




      }

  }

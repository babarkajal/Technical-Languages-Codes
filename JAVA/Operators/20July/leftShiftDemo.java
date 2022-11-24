class LeftShiftDemo {

    public static void main(String[] args) {
          int num = 12;
          int ans = num <<2;
          /* work of << operator
            1. convert given left operand int num to binary value
            2. shift than num by value(right operand)
            3. again convert that value into decimal
          */

          // here num  = 12
          // 1. num =>         0000 1100
          // 2. num<<2         0011 0000
          // 3. ans = 48
          //
            System.out.println("Ans 12 < 2: "+ans);           //48

            num = 75;
            ans = 75 <<4;
            // here num  = 75
            // 1. num =>        0000 0100 1011
            // 2. num << 4      0100 1011 0000
            // 3. ans = 1200
            System.out.println("Ans 75 << 4: "+ans);          //1200

            //---------------------- left shift for -ve values ----------------------------
            num = -12;
            ans = num << 2;
            /*
              first find the binary value for -12

              0000 0000 0000 0000 0000 0000 0000 1100
              1111 1111 1111 1111 1111 1111 1111 0011
              +                                     1
              -----------------------------------------
              1111 1111 1111 1111 1111 1111 1111 0100     =>>this is how values are stored

              1111 1111 1111 1111 1111 1111 1101 0000     => this is an negative num ecause its msb bit is 1
              again convert this to 2's compliment to get its decimal value
              which gives 48

            */
            System.out.println("Ans -12 <<2: "+ans);        //-48

            /*Rule: The ans of the left shift  is same for same values bu compliment of each other but sign gets changes
              e.g -12 << 2= -48
                   1 << 2 = 48
            */
        }
}

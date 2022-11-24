//Unsigned Right Shift opertaor (>>>):
//      it always add 0 at the right after shifting toward right wheather it is +ve num or -ve num

class UnsignedRightShift {
      public static void main(String[] args) {
              int num = -95;
              int ans = num >>> 28;
              System.out.println("Ans(-95 >>>28): "+ans);   //15
              /*  here value is negative find its binary
                              0000 0000 0000 0000 0000 0000 0101 1111
                              1111 1111 1111 1111 1111 1111 1011 0000
                            +                                       1
                            --------------------------------------------
                             1111 1111 1111 1111 1111 1111  1011 0001     ==>-95
                    num >>21 0000 0000 0000 0000 0000 0000  0000 1111     ==>  15
              */

      }

}

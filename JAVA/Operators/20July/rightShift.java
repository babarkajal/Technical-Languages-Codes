//rigth shift opertaor
//Note:  if Num is positive them 0's are added at the first but if num is -ve then 1 is added at first

class RightShift {
      public static void main(String[] args) {
          int num = 95;
          int ans = num >> 4;
          /*   num =>      0000 0000 0000 0000 0000 0000 0101 1111
               num >> 4    0000 0000 0000 0000 0000 0000 0000 0101 ==> 5
          */
          System.out.println("95 >> 4: "+ans);        //5

          num = -95;
          ans = num >> 4;
          /*  here value is negative find its binary
                          0000 0000 0000 0000 0000 0000 0101 1111
                          1111 1111 1111 1111 1111 1111 1011 0000
                        +                                       1
                        --------------------------------------------
                         1111 1111 1111 1111 1111 1111  1011 0001     ==>-95
                num >>4  1111 1111 1111 1111 1111 1111  1111 1011     ==>  -6
                here this value represents the  -6 decimal
          */
          System.out.println("-95>>4: "+ans);       //-6

          // you can notice one thing that right shift for same value but sign is different has some relation
          // means
          //     left shift ans for num = -(right shift of +ve value + 1 )
          //     e.g   95 >> 4 = 5
          //          -95 >> 4 = -6 =>-(5+1)
      }
}

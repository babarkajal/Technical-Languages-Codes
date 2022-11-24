/*
Program 3: Write a Java program for following operations and explain the error if any.
1.num=188 result = num>>>4
2.num=255 result1 = num<<<3
2. num = -108 result =num>>>23
3. num=-123 result1 = num<<<15
*/

class Operators {
    public static void main(String[] args) {
          int num = 0;    //declare a variable of type int
          int ans = 0;   //declare a varible to store the result

          num = 188;
          ans = num >>> 4;
          /*  this is unsigned right shift opertaor it will add 0 at the start while shifting the bits
            num = 0000 1011 1100
                  0000 0101 1110
                  0000 0010 1111
                  0000 0001 0111  ==>
                     --------------
          */
          System.out.println("Ans = "+ ans);          //24


          num=255;
          //ans = num<<<3;        ..error: this operator is not in Java
          num = -108;
          ans = num>>>23;
          /*
              108 = 0000 0000 0000 0000 0000 0000 0110 1100
                    1111 1111 1111 1111 1111 1111 1001 0011
                    +                                     1
                    ----------------------------------------
                    1111 1111 1111 1111 1111 1111 1001 0100 =>-108
                    0000 0000 0000 0000 0000 0001 1111 1111 ==> 511
          */
          System.out.println("Ans = "+ans);
          num=-123;
          //ans = num<<<15;       //error
          //System.out.println("Ans = "+ans);
    }


}

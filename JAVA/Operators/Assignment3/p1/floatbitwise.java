class BitwiseDemo {
    public static void main(String[] args) {
        //bitwise and
        float x = 2.5f, y = 3.5f;
        int ans;

        ans = x&y;
        System.out.println("ans(&) = "+ans);


        //bitwsie or |
        ans = x | y;
        System.out.println("ans(|) = "+ans);

        //bitwsie xor ^
        ans = x ^ y;
        System.out.println("ans(^) = "+ans);


        double num1 = 4.5, num2 = 2.3;
        System.out.println("num1 & num2: ",num1 & num2);          //error
      }

  }


/* bitwise operators works only on ineteger datatype not on float values or double values
bitwise operator excepts integer operand to work on because integers are stored directly in binary format internally but the float values
are stored in floating point format using single precision format and double precision format 
*/

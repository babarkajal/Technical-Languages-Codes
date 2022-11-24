//use left and right shift on char values
class CharShiftDemo {
      public static void main(String[] args) {
          char ch='A';      //65
          //char ans = ch << 1;
          //charShift.java:5: error: incompatible types: possible lossy conversion from int to char
          //char ans = ch << 1;
          //the ans for every shift opertaor is always int

          int ans = ch<<1;
          /*    65=> 0000 0100 0001
            65<<1 => 0000 1000 0010
                  => 130
          */
          System.out.println("Ans ('A'<<1): "+ ans);
      }
}

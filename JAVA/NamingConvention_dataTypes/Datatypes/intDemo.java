//      int type
//      size - 4 bytes
//      range:- -21474836 to 21474837

class IntDemo {
  public static void main(String[] args) {
      int i = 10;       //so 4 bytes will be allocated but only 1 byte is used
      System.out.println("i= "+i);
      i = 2147483653;   //error: integer num is too large
      System.out.println("i= "+i);
a

  }
}

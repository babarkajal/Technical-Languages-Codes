class ByteDemo {
  public static void main(String[] args) {
      //the values is checked at compile time wheather it is crossing limit or not
      // if yes then compile time error occures that loosy conversion from int to byte
      byte a = 127;         //127

      System.out.println("a = "+a);

      a++;                    //-128  (wrap up operation)
      //NO ERROR:- this is runtime operation so compiler don't know that what value will generate  thats why no any
      //            error occures

      System.out.println("after increment a= "+a);

      byte x =100;
      byte y =20;
      //addition operation:- its also a compile time operation
      a = x+y;
      a  = 120;
      System.out.println(a);
  }
}

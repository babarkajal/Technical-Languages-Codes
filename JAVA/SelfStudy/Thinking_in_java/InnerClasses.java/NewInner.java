class Outer {
  class Inner {
    Inner() {
      System.out.println("Inner con");
    }
    /*method return outer ref
    Outer outer() {
      return Outer.this;
    }*/
  }
}

class Test {
  public static void main(String[] args) {
    Outer O = new Outer();
    Outer.Inner in = O.new Inner ();
  }
}

class Outer {
  Outer() {
    System.out.println("OUter con");
  }
  class Inner {
    Inner() {
      System.out.println("Inner con");
    }
    void fun () {
      System.out.println("In Inner fun ");
    }
    //method return outer ref
    Outer outer() {
      return Outer.this;
    }

  }
  void fun () {
    System.out.println("In outer fun ");
  }
  Inner inner() {return new Inner(); };
}

class Test {
  public static void main(String[] args) {
    Outer O = new Outer();
    Outer.Inner in = O.inner();
    in.outer().fun();
  }
}

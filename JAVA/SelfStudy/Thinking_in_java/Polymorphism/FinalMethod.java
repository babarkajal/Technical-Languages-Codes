class One {
  //we cannot overrride
  final static void foo() {
    System.out.println("Hello from one foo");
  }

}

class Two extends One{
   void foo2() {
    System.out.println("Hello from Two foo");
  }

}

class FinalMthod {
  public static void main(String args[]) {
      Two t = new Two();
      t.foo2();
      t.foo();
  }

}

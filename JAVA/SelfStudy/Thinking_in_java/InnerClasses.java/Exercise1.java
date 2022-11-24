class Outer {
    private int i = 20;
    class Inner {
      Inner() {
        System.out.println("Inner called");
      }
        private int j = 30;
        void display(){
          System.out.println("I= "+i);
          System.out.println("J = "+j);
          System.out.println("new Inner "+ref());
        }
    }
    Outer() {
      System.out.println("Outer called");
    }
    Inner ref() {
      return new Inner();
      System.out.println("J = "+j);
    }
}

class Test {
  public static void main(String[] args) {
        Outer c = new Outer();
        System.out.println("c= "+c);
        Outer.Inner i = c.ref();
        System.out.println("i= "+i);
        i.display();

  }
}

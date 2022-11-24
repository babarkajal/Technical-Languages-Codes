abstract  class Parent {
  Parent(){
    System.out.println("parent con");
    print();
    fun();
  }
  void fun() {
    System.out.println("In fun");
  }
  abstract void print();
}

class Child extends Parent {
  int i = 10;
  Child(){
    fun();
    System.out.println("Child con");
    print();

  }
  void print(){
    System.out.println("i = "+i);
  }
}

class Test {
  public static void main(String[] args) {
    Child c = new Child();
  }
}

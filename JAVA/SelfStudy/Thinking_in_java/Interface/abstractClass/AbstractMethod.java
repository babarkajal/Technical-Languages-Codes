//a class having an abstract method without declaring it an abstract class

abstract class AbstractMethod {
    public void fun(){
      System.out.println("Fun");
    }
    //abstract method
  //  void gun();

}

class Test {
  public static void main(String args[]) {

    //we cannot instantiate the abstract class
    AbstractMethod a = new AbstractMethod();
  }
}

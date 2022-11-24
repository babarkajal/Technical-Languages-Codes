import java.util.ArrayList;
class Parent {
    void display(){
      System.out.println("Parent display");
    }
}

class child extends Parent {
  void display(){
    System.out.println("Child display");
  }
}

class Test {
  public static void main(String[] args) {
    ArrayList<Parent> arr = new ArrayList<Parent>();
    arr.add(new Parent());
    arr.add(new child());
    arr.add(new Parent());
    arr.get(1).display();
    arr.get(2).display();
  }
}

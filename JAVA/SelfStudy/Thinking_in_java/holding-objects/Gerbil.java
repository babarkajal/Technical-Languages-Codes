import java.util.ArrayList;
class Gerbil {
    int gerbilNumber;
    Gerbil(int gerbilNumber) {
      this.gerbilNumber = gerbilNumber;
    }
    void hopCount()  {
      System.out.println("hop "+ gerbilNumber);
    }
}

class Test {
  public static void main(String[] args) {
    ArrayList<Gerbil> arr = new ArrayList<Gerbil>();
    arr.add(new Gerbil(10));
    arr.add(new Gerbil(20));
    arr.add(new Gerbil(30));
    for(Gerbil o : arr){
      o.hopCount();
    }
  }
}

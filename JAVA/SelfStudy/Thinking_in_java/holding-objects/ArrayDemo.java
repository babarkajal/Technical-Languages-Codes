import java.util.ArrayList;
class Test1 {
  public static void main(String[] args) {
    ArrayList arr = new ArrayList();
    System.out.println("arraylist "+arr);
    for (int i=0;i<6;i++ ) {
      arr.add(i+1);
    }
    arr.add(3.4);
    System.out.println("arrayList");
    for(int i=0; i<7; i++){
      System.out.println(arr.get(i));
    }
  }
}

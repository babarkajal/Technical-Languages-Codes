import java.util.ArrayList;
class Test {
  public static void main(String[] args) {
    ArrayList<Integer> arr = new ArrayList<Integer>();

    System.out.println("arraylist "+arr);
    for (int i=0;i<6;i++ ) {
      arr.add(i+1);
    }
    arr.add(4,500);
    System.out.println("arrayList");
    for(int i=0; i<7; i++){
      System.out.println(arr.get(i));
    }
  }
}

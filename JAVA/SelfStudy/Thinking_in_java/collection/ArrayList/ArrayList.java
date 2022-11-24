import java.util.ArrayList;
class ArrayListDemo {
  public static void main(String[] args) {
    ArrayList<Integer> arr = new ArrayList<Integer>(5);
    System.out.println(arr);
    for(int i=100; i<=120; i++)
            arr.add(i);
    arr.add(5,102);
    System.out.println(arr);
    System.out.println(arr.size());
    System.out.println(arr.isEmpty());
    System.out.println(arr.contains(115));
    System.out.println(arr.contains(134));
    System.out.println(arr.indexOf(102));
    System.out.println(arr.lastIndexOf(102));
    System.out.println(arr.indexOfRange(105,2,5));
  }
}

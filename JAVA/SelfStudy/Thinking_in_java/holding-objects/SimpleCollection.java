import java.util.*;
class SimpleCollection {
  public static void main(String[] args) {
    Collection<Integer> c = new ArrayList<Integer>();
    System.out.println(c);
    c.add(10);
    c.add(20);
    c.add(30);
    c.add(20);
    System.out.println(c);

    Set<Integer> s = new List<Integer>();
    System.out.println(s);
    s.add(10);
    s.add(20);
    s.add(30);
    s.add(20);
    System.out.println(s);
  }
}

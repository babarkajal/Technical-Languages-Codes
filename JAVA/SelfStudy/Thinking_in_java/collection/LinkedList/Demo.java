import java.util.LinkedList;
import java.util.Arrays;
class Demo {
  public static void main(String[] args) {
    LinkedList l = new LinkedList(Arrays.asList(1,2,3,4,5));
    System.out.println(l.hashCode());
    System.out.println(l);
    l.addFirst(30);
    l.addLast(3.5);
    System.out.println(l);
    System.out.println(l.poll());
    System.out.println("after poll");
    System.out.println(l);
    System.out.println(l.peek());
    System.out.println("after peek");
    System.out.println(l);
    l.add(2,45);
    System.out.println("After add at 2nd index");
    System.out.println(l);

    System.out.println("last element"+l.peekLast());
    System.out.println("Last poll element"+l.pollLast());
    System.out.println(l);
  }
}

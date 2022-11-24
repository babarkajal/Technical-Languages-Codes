import java.util.List;
import java.util.ArrayList;
import java.util.Collection;
class ListDemo {
  public static void main(String[] args) {
    java.util.List l = new ArrayList();
    System.out.println(l);        //empty List
    System.out.println(l.hashCode());     //...
    for(int i=1; i<6; i++)
        l.add(i);
    System.out.println(l);

    Collection c = new ArrayList();
    System.out.println(c.hashCode());
    c.add(20);
    c.add(25);
    c.add(3.4);
    c.add(new String("kajal"));
    System.out.println(c);
    System.out.println(c.indexOf(25));
  }
}

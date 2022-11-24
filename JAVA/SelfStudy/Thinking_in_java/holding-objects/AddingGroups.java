import java.util.*;
class AddingGroups {
      public static void main(String[] args) {
        Collection<Integer> a = new ArrayList<Integer>(Arrays.asList(1,2,3,4,5));
        System.out.println(a);
        Integer[] arr = {6,7,8,9};
        //pass a array to the addAll method
        a.addAll(Arrays.asList(arr));
        System.out.println(a);

        Collections.addAll(a,12,13,14,15);
        System.out.println(a);
        Collections.addAll(a,arr);
        System.out.println(a);

        List<Integer> l =new ArrayList<Integer>(Arrays.asList(100,200,300,400));
        System.out.println(l);
        l.set(1,600);
        System.out.println(l);
        l.add(30);
        System.out.println(l);
        }
}

class TernaryDemo {
      public static void main(String[] args) {
            int x = 25, y=20;
            int result = (x > y)? System.out.println("Hello") : System.out.println("hii");
                                              //this means if the condition is true then evalutes the
                                              //expression right after ? else go next to :

            /*gives error that we canot convert void to int means System.out.println(); function's return
            type is void and wwe are trying to convert it to the int
           */

            System.out.println("Result "+ result);

      }
}

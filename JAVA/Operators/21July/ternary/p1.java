class TernaryDemo {
      public static void main(String[] args) {
            int x = 25, y=20;
            int result = (x < y)? x : y;      //this means if the condition is true then evalutes the
                                              //expression right after ? else go next to :
           /*          = false ? x:y
                       = y
           */
            System.out.println("Result "+ result);

      }
}

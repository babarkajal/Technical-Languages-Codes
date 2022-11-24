/*p1.
    write a java program to check whether tje num is even or odd taake function line int evenOdd(int)
*/

class EvenOdd {
    //function uses ternary operator to check even or odd condition
      static boolean evenOdd(int num) {
        return  num%2==0 ? true : false;
      }

      public static void main(String[] args) {
            int num = 20;
            //check the num is even or odd
            if(evenOdd(num)) {
              System.out.println(num +" is an even num");
            }
            else{
              System.out.println(num+ "  is odd num");
            }
      }
}

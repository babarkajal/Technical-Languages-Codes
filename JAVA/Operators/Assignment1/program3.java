/*Program 3: What will be output for following statement when a=10 and b=20 c = 50
a++ + ++b + ++c ?
*/

class Operator {
    public static void main(String[] args) {

        int a = 10, b=20, c = 50;

        int ans = a++ + ++b + ++c;
        /*      = 10 + ++b + ++c            //a = 11
                = 10 + 21 + ++c             //b = 21
                = 10 + 21 +51               // c = 51
                = 82
        */
        System.out.println("Ans  = "+ ans);
      }
}

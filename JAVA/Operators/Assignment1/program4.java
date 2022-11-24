/*
Program 4: What will be output for following statement when a=10 and b=20 c = 50
--a + ++b + c-- ?
*/

class Operator {
    public static void main(String[] args) {

        int a = 10, b=20, c = 50;

        int ans = --a + ++b + c--;
        /*      = 9 + ++b + c--            //a = 9
                = 9 + 21 + c--             //b = 21
                = 9 + 21 + 50               // c = 49
                = 80
        */
        System.out.println("Ans  = "+ ans);
      }
}

/*Program 5: What will be output for following statement when a=10 and b=20 c = 50
a++ + --b + c-- ?
*/
class Operator {
    public static void main(String[] args) {

        int a = 10, b=20, c = 50;

        int ans = a++ + --b + c--;
        /*      = 10 +--b + c--            //a = 11
                = 10 + 19 + c--             //b = 19
                = 10 + 19 + 50               // c = 49
                = 79
        */
        System.out.println("Ans  = "+ ans);     //79
        System.out.println("a  = "+ a);       //11
        System.out.println("b  = "+ b);       //19
        System.out.println("c  = "+ c);       //49
      }
}

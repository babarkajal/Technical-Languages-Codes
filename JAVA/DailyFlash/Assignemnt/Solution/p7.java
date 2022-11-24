/*Program 7: Write a Program that takes Three integers and prints the minimum
number from them.
I/p: 50 7 56 (Take hard coded value)
O/p: minimum number from 50 7 and 56 is 7.
*/

class Program {
    public static void main(String[] args) {
           int num1 = 17, num2 = 18, num3 = 19;
           int min = num1 < num2 ? ((num1 < num3 ) ? num1 : num3 ) : ((num2 < num3) ? num2 : num3);
           System.out.println("Minimum num from "+ num1 + " "+ num2 + " & "+ num3 + " is " + min);

    }
}

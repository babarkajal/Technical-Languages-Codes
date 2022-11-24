/*Program 23: Write a Java program to take two numbers (hardcoded) and print its LCM
(Least Common Multiple).
Output: enter two numbers (Hardcoded): 10 15
LCM is 30.
*/

class  Program {
    public static void main(String[] args) {

          //find the least common Multiple
          int num1 = 24, num2 = 30;

          //least Multiple is always greater than the greatest one
          //so first greatest one
          int max = num1 > num2 ? num1 : num2;

          //traverse upto the LCM not found
          int LCM = max;
          /*
            1. Initlize it to the largest num
            2. we are going to increment the num by maximum num(i.e 15)
           */
          while(true) {
                 if(LCM%num1 == 0 && LCM%num2==0) {
                      break;
                 }
                 LCM += max;          //increment by max
                                     // there is no any need to increment the num by 1 because it will take lots of useless iterations
          }
          System.out.println("LCM of "+ num1 + " & "+ num2 +": " + LCM);
    }
}

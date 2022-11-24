/*
Program 2: Write a code to calculate following operation between two numbers
1) Addition
2) Subtraction
3) Multiplication
4) Division
5) Modulus
Every operation should carried out in a separate method
*/

class ArithmeticDemo {
      public static void main(String[] args) {
          int num1 = 40 , num2 = 20;
          int ans = 0;

          ans = num1 + num2;            //addition
          System.out.println("Adition = "+ans);      //30

          ans = num1 - num2;                      //substraction
          System.out.println("Substraction = "+ ans);                //10

          ans = num1 / num2;                          //division
          System.out.println("Division = "+ ans);                     //2

          ans = num1 * num2;                                          //multiplication
          System.out.println("Multiplication = "+ ans);               //200

          ans = num1%num2;                                      //modulus
          System.out.println("Mod = "+ ans);                    //0
      }
}

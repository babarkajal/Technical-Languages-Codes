/*Program 6: write a program to check whether the number is perfect number or not
Hint: (positive integer that is equal to the sum of its proper divisors)
e.g i/p : take hardcoded value
o/p : 6 is a prefect number
*/

class Program {
  static boolean isPerfect(int num) {
          int sumOfDiv = 0;
          //Divisor of num are upto half of that num
         for(int i=1; i<=num/2; i++) {
             if(num%i==0)
                sumOfDiv +=i;
         }

         if(sumOfDiv == num)
            return true;
         else
            return false;
  }
  public static void main(String[] args) {
          int num = 28;
          if(isPerfect(num))
              System.out.println("The num "+ num + " is Perfect num");
          else
              System.out.println("The num "+ num + " is not Perfect num");

  }
}

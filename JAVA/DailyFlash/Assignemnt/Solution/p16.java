/*Program 17: Write a program to check whether the number is prime number or not
(Take hardcoded Value)
Input: 13
Output: It is a prime number
*/

class Program {
    static boolean isPrime(int num) {
            if(num == 1)
                return false;
           for(int i=2; i<=num/2; i++) {
               if(num%i == 0)
                    return false;


          }
            return true;
    }

    public static void main(String[] args) {
      System.out.println("is 5 prime? "+ isPrime(5));
      System.out.println("is 7 prime? "+ isPrime(7));
      System.out.println("is 8 prime? "+ isPrime(8));
      System.out.println("is 13 prime? "+ isPrime(13));

    }
}
